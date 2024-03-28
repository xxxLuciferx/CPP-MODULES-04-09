/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:52:41 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/28 22:45:47 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span A(3);
        
        A.addNumber(20);
        
        A.addNumber(50);
        A.addNumber(80);
        A.addNumber(99);
        A.addNumber(200);
        A.addNumber(500);
        A.addNumber(800);
        A.addNumber(1000);
        A.addNumber(21000);
        A.addNumber(11000);
        std::cout << "<A> Shortest span is : " << A.shortestSpan() << std::endl;
    
        Span sp = Span(500);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "<sp> Shortest span is : " << sp.shortestSpan() << std::endl;
        std::cout << "<sp> logngest span is : " << sp.longestSpan() << std::endl;
        sp.addMultiple(5, 15);
        // std::cout <<  A.value << std::endl;
        // for (size_t i = 0; i < sp.array.size(); i++)
        // {
        //     std::cout << sp.array[i] << " ";
        // }
        
        // return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}