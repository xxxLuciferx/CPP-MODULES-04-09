/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:12:46 by khaimer           #+#    #+#             */
/*   Updated: 2024/04/25 15:38:22 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void    reading_file_data(std::map<std::string, float> &binance, std::string binance_data)
{
    std::ifstream inputFile(binance_data);
    std::string line;

    if(!inputFile)
        throw std::runtime_error("Invalid File");
    std::getline(inputFile, line);
    while (std::getline(inputFile, line))
    {
       std::istringstream reading(line);
       std::string date,value;
       std::getline(reading, date, ',');
       std::getline(reading, value);
       binance[date] = atof(value.c_str());
    }
    inputFile.close();
}

std::string trim(const std::string& to_trim)
{
    size_t start = 0;
    std::string str = to_trim;
    
    while (start < str.length() && str[start] == ' ')
        start++;
    str = str.substr(start);
    size_t end = str.length() - 1;
    while (end > 0 && str[end] == ' ')
        end--;
    str = str.substr(0, end + 1);
    return str;
}


int valid_name(const std::string& to_trim)
{
    std::string string = trim(to_trim);
    
    if (string == "date | value")
        return 0;
    return 1;
}

int all_digits(const std::string &index)
{
    
    for (size_t i = 0; i < index.length(); i++)
    {
        if (!isdigit(index[i]))
            return 1;
    }
    return 0;
}
int valid_date(const std::string &date)
{
    if(date[4] != '-' || date[7] != '-' || date.length() != 10)
        return 1;
    
    std::string Year  = date.substr(0, 4);
    std::string Month = date.substr(5, 2);
    std::string Day   = date.substr(8, 2);
    
    if (all_digits(Year) || all_digits(Month) || all_digits(Day))
        return 1;

    int year = atoi(Year.c_str());
    int month = atoi(Month.c_str());
    int day = atoi(Day.c_str());
    
    if (year < 2008 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
        return 1;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30))
		return 1;
	if (month == 2)
    {
        int leap_day = (year % 4 == 0);
        int maxDays = 28;
        if (leap_day)
            maxDays = 29;
        if (day > maxDays)
            return 1;
    }    
    return 0;
}


int valid_value(const std::string& value)
{
    int flag = 0;
    for (size_t i = 0; i < value.length(); i++) 
    {
        if (value[i] == '.') 
        {
            flag++;
            if (i > 0 && value[i - 1] == '.')
                return 1;
        }
        else if (!isdigit(value[i]))
            return 1;
    }
    if (flag > 1)
        return 1;

    float val = atof(value.c_str());
    if (val > 0 && val < 1000)
        return 0;
    return (1);
}

void	get_closest_value(std::map<std::string, float>& binance,const std::string& date,const std::string& value)
{

  	std::map<std::string, float>::iterator it = binance.lower_bound(date);
    if (it == binance.end())
        --it;
    else if (it != binance.begin() && it->first != date) 
	{
    	std::map<std::string, float>::iterator prev = it;
        --prev;
        if (date.compare(prev->first) - date.compare(it->first) > 0)
            it = prev;
    }
    float margin = it->second;
    float price = atof(value.c_str());
    float result = price * margin;
	std::cout << std::fixed << std::setprecision(2) << date << " => " << value << " = " << result << std::endl;  
}

void    execution(std::map<std::string, float> &binance, std::string file_name)
{
    std::ifstream inputFile(file_name);
    std::string line;

    if (!inputFile)
        throw std::runtime_error("Error : Invalid File");
    std::getline(inputFile, line);
    if (valid_name(line))
		throw std::runtime_error("Error : [Date | Value] Invalid");
    while (std::getline(inputFile, line))
    {
        std::string date, value;
        std::istringstream compaire(line);
        if(std::getline(compaire, date, '|') && std::getline(compaire, value) && !line.empty()) 
        {
            if (line.find_first_not_of("\n") == std::string::npos) 
                continue;
            if (valid_date(trim(date)))
            {
                std::cout << "Error: Invalid date format: " << trim(date) << std::endl;
                continue;
            }
            if (valid_value(trim(value)))
            {
                std::cout << "Error: Invalid value format or out of range: " << trim(value) << std::endl;
                continue;
            }
            get_closest_value(binance,trim(date),trim(value));
        }
		    if (!line.empty() && value.empty())
		    {
		    	std::cout << "Error: bad input : => " << trim(date) << std::endl;
		    	continue;
		    }
		    if (!line.empty() && date.empty())
		    {
		    	std::cout << "Error: bad input : => " << trim(value) << std::endl;
		    	continue;
		    }
    }
    inputFile.close();
}

 