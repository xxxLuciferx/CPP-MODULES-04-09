/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:46:34 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/24 18:03:10 by khaimer          ###   ########.fr       */
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
                    return "errrror , vector is fulll\n";
                }
        };

        void    addNumbers(int number);

        
        int     longestSpan();
        int     shortestSpan();

};