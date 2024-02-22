/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:28:11 by khaimer           #+#    #+#             */
/*   Updated: 2024/02/22 15:30:13 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

class ScalarConverter
{
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
	public :
		static void	convert(std::string& input);
};

bool	type_pseudo(std::string& input);
bool	type_char(std::string& charactere);
bool 	type_int(const std::string& input);
bool	type_double(const std::string& input);
void	print_char(double value);
bool	double_range(double value);
bool	type_float(std::string& input);
void	print_int(double value);
void	handle_pseudo(std::string& input);
