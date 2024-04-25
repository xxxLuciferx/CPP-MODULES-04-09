/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:12:41 by khaimer           #+#    #+#             */
/*   Updated: 2024/04/25 11:23:19 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::map<std::string, float> binance;
        std::string binance_data = "data.csv";
        std::string file_name = av[1];
        try
        {
            reading_file_data(binance, binance_data);
            execution(binance, file_name);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cout << "Error: could not execute." << std::endl;    
    
}