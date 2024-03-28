/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:52:41 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/26 16:33:20 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        // std::vector<unsigned int> myvector;
        // unsigned int value = 8;
        // Span A(value);
        
        // A.addNumbers(20);
        
        // A.addNumbers(50);
        // A.addNumbers(80);
        // A.addNumbers(99);
        // A.addNumbers(200);
        // A.addNumbers(500);
        // A.addNumbers(800);
        // // A.addNumbers(1000);
        // // A.addNumbers(21000);
        // // A.addNumbers(11000);
        // std::cout << "Shortest span " << A.shortestSpan() << std::endl;
    
        // // std::cout <<  A.value << std::endl;
        // for (size_t i = 0; i < A.array.size(); i++)
        // {
        //     std::cout << A.array[i] << " ";
        // }
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
}