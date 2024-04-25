/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:12:50 by khaimer           #+#    #+#             */
/*   Updated: 2024/04/25 15:39:07 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

void            reading_file_data(std::map<std::string, float> &binance, std::string file_name);
void            execution(std::map<std::string, float> &binance, std::string file_name);
std::string     trim(const std::string& to_trim);
int             valid_name(const std::string& to_trim);
int             all_digits(const std::string &index);
int             valid_date(const std::string &date);
int             valid_value(const std::string& value);
void	        get_closest_value(std::map<std::string, float>& binance,const std::string& date,const std::string& value);
void            execution(std::map<std::string, float> &binance, std::string file_name);