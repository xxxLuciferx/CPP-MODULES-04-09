/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:46:34 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/28 22:46:17 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include<exception>
#include <algorithm>

class Span
{
    private:
        std::vector<int> array;
        unsigned int value;
    public:
        Span();
        Span(unsigned int number);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span();

        class Full : public std::exception 
        {
            public:
                const char* what() const throw() 
                {
                    return "Error, Vector is full\n";
                }
        };
        class Size : public std::exception 
        {
            public:
                const char* what() const throw() 
                {
                    return "No span can be found.";
                }
        };

        void    addNumber(int number);

        
        int     longestSpan();
        int     shortestSpan();

        void	addMultiple(int first, int last);

};