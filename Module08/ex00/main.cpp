/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:39:18 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/22 23:45:22 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>


template <typename T>
T&    easyfind(T *name, int number)
{
    // try
    // {    
        for (size_t i = 0; i < 4; i++)
        {
            if (number == name[i])
                return name[i];
        }   
        // char* khalil = "NOT FOUND";
        return <T>"NOT FOUND";
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
}


int main()
{
    // int khalil[4] = {1, 3, 20, 18};
    char khalil[4] = {'0', '3', '2', '9'};
    int number = 48;

    int result = easyfind(khalil, number);
    std::cout << result << std::endl;
    
    return 0;
    
}