/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:26:49 by khaimer           #+#    #+#             */
/*   Updated: 2024/02/22 15:27:25 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

int main(int argc,char **argv)
{
	if (argc == 2)
	{
		std::string input = argv[1];
		if (type_pseudo(input))
			handle_pseudo(input);
		else if ((type_char(input) || type_int(input) || type_double(input) || type_float(input)))
			ScalarConverter::convert(input);
	}
	else
		std::cout << "<incorrect input>" << std::endl;
}