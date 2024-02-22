/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:28:21 by khaimer           #+#    #+#             */
/*   Updated: 2024/02/22 10:00:17 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib> // For strtod
#include <cctype>  // For isprint
#include <cmath>   // For isnan, isinf
#include <limits>  // For numeric_limits
#include <iomanip> // For setprecision


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
    double doubleValue;

    // Special case handling for "+inff" and "-inff"
    if (value == "+inff" || value == "inff")
        doubleValue = std::numeric_limits<double>::infinity();
    else if (value == "-inff")
        doubleValue = -std::numeric_limits<double>::infinity();
    else 
    {
        const char* str = value.c_str();
        char* end;
        errno = 0;
        doubleValue = strtod(str, &end);
        if (str == end || errno == ERANGE) { // Handle parsing failure or range error
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
            return; // Skip further processing if input is not valid
        }
    }

    // Conversion to char
    if (doubleValue < std::numeric_limits<char>::min() || doubleValue > std::numeric_limits<char>::max() || isnan(doubleValue) || isinf(doubleValue))
        std::cout << "char: impossible" << std::endl;
    else {
        char charValue = static_cast<char>(doubleValue);
        if (isprint(charValue))
            std::cout << "char: '" << charValue << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }

    // Conversion to int
    if (doubleValue < std::numeric_limits<int>::min() || doubleValue > std::numeric_limits<int>::max() || isnan(doubleValue) || isinf(doubleValue))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(doubleValue) << std::endl;

    // Conversion to float
    if (isnan(doubleValue) || isinf(doubleValue) || doubleValue < -std::numeric_limits<float>::max() || doubleValue > std::numeric_limits<float>::max())
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(doubleValue) << 'f' << std::endl;

    // Conversion to double always possible if we got this far
    std::cout << "double: " << doubleValue << std::endl;
}


ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
    if (this != &ref)
        *this = ref;
    return (*this);
}