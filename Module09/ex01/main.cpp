/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:44:32 by khaimer           #+#    #+#             */
/*   Updated: 2024/04/26 16:30:34 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            std::string Value = av[1];
            execution(Value.c_str());
            // std::cout << Value << std::endl;
            
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';   
        }
    }
    else
    {
        std::cout << "Error Arguments\n";
        return (1);   
    }
        
    
    
    
}

// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 	{
// 		std::cout << "Error : bad input! " << std::endl;
// 		return (1);
// 	}
// 	try
// 	{
// 		std::string	input = av[1];
// 		int result = evaluate_RPN(input);
// 		std::cout << result << std::endl;
// 	}
// 	catch(const std::runtime_error& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// }