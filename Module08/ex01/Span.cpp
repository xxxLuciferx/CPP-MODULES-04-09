/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:09:51 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/25 00:43:06 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : array(0), value(0){}

Span::Span(unsigned int number) : value(number){}

Span::Span(const Span& copy)
{
    *this = copy;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->array = other.array;
        this->value = other.value;
    }
    return *this;
}

Span::~Span() {}


Span::~Span() {}

void	Span::addNumbers(int number)
{
    try
    {
        if(array.size() < value )
            array.push_back(number);
        else
            throw Span::Full(); 
    }
}


int Span::longestSpan()
{
    std::sort(array.begin(), array.begin() + array.size());
    return  (array[array.size() - 1] - array[0]);
}

