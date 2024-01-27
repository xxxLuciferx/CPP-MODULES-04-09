/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:28:21 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/27 11:57:40 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

void ScalarConverter::convert(const std::string& value)
{
    try {
        int intValue = std::stoi(value);
        char charValue = static_cast<char>(intValue);
        if (std::isprint(charValue))
            std::cout << "char: '" << charValue << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } 
    catch (...) {
        std::cout << "char: impossible" << std::endl;
    }

    try {
        int intValue = std::stoi(value);
        std::cout << "int: " << intValue << std::endl;
    } catch (...) {
        std::cout << "int: impossible" << std::endl;
    }

    try {
        float floatValue = std::stof(value);
        // std::cout << std::fixed << std::setprecision(1) << floatValue << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
    } catch (...) {
        std::cout << "float: impossible" << std::endl;
    }

    try {
        double doubleValue = std::stod(value);
        std::cout << "double: " << doubleValue << std::endl;
    } catch (...) {
        std::cout << "double: impossible" << std::endl;
    }  
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
    if (this != &ref)
        *this = ref;
    return (*this);
}