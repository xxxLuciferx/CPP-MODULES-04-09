/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:28:21 by khaimer           #+#    #+#             */
/*   Updated: 2024/02/22 15:26:46 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype> 
#include <cmath>  
#include <limits> 
#include <iomanip>
#include <sstream>


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& value)
{
    if (this != &value)
        *this = value;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
    if (this != &ref)
        *this = ref;
    return (*this);
}

bool	type_pseudo(std::string& input)
{
	if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff")
			return true;
	return false;
}

bool	type_char(std::string& charactere)
{
	if ((!charactere.empty() && charactere.length() == 1) || (charactere.length() == 3 && charactere[0] == '\'' && charactere[2] == '\''))
		return true;
	return false;
}

bool type_int(const std::string& input) 
{
    if (input.empty()) 
		return false;
    size_t start = 0;
    if (input[0] == '+' || input[0] == '-') 
	{
        if (input.length() == 1) 
			return false;
        start = 1;
    }
    for (size_t i = start; i < input.length(); ++i)
	{
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}

bool type_double(const std::string& input)
{
	std::istringstream line(input);
	double value;
	return (line >> value) && (line.eof());
}

void	print_char(double value)
{
	int	res = static_cast<int>(value); 
	if (!std::isprint(res) || res == 0)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(value) << std::endl;
}

bool double_range(double value) 
{
    double intMin = std::numeric_limits<int>::min();
    double intMax = std::numeric_limits<int>::max();
    if (value < intMin || value > intMax)
        return true; 
    return false;
}

bool type_float(std::string& input)
{
	if (!type_double(input))
		return false;
	return true;
}

void	print_int(double value)
{
	int	res = static_cast<int>(value); 
	if (double_range(res))
		std::cout << "int : int out of range" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(value) << std::endl;
}

void	print_double(double	value)
{
	int res = static_cast<int>(value);
	if ((value - res) == 0)
		std::cout << "double : " << value << ".0"<< std::endl;
	else
		std::cout << "double : " << value << std::endl;
}


void	print_float(double value)
{
	int	res = static_cast<int>(value); 
	if ((value - res) == 0)
		std::cout << "float  : " << static_cast<float>(value) << ".0f"<< std::endl;
	else
		std::cout << "float  : " << static_cast<float>(value) << "f"<< std::endl;
}


void	print(double value)
{
	print_char(value);
	print_int(value);
	print_float(value);
	print_double(value);
}

void	ScalarConverter::convert(std::string& input)
{

	std::stringstream number;

	size_t fpos = input.find('f');
	if (fpos != std::string::npos)
	{
		double res;
		std::string number_part = input.substr(0, fpos);
		number << number_part;
		number >> res;
		print(res);
	}
	else if (type_char(input) && !type_int(input))
	{
		char res ;
		number << input;
		number >> res;
		print(res);
	}
	else
	{
		double	res;
		number << input;
		number >> res;
		print(res);
	}
}

void	handle_pseudo(std::string& input)
{
	if (input == "-inff" || input == "-inf")
	{
		std::cout << " char   : impossible " << std::endl;
		std::cout << " int    : impossible"  << std::endl;
		std::cout << " float  : -inff" << std::endl;
		std::cout << " double : -inf" << std::endl;
	}
	else if (input == "+inff" || input == "+inf")
	{
		std::cout << " char   : impossible " << std::endl;
		std::cout << " int    : impossible"  << std::endl;
		std::cout << " double : +inf" << std::endl;
		std::cout << " float  : +inff" << std::endl;
	}
	else if (input == "nan" || input == "nanf")
	{
		std::cout << " char   : impossible " << std::endl;
		std::cout << " int    : impossible"  << std::endl;
		std::cout << " float  : nanf" << std::endl;
		std::cout << " double : nan" << std::endl;
	}
}


