/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:09:51 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/28 01:42:44 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : value(0){}

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

void	Span::addNumber(int number)
{
        if(array.size() < value )
            array.push_back(number);
        else
            throw Span::Full(); 
}

int Span::longestSpan()
{
    if (array.size() < 2)
        throw Span::Size();
    std::sort(array.begin(), array.begin() + array.size());
    return  (array[array.size() - 1] - array[0]);
}

int     Span::shortestSpan()
{
    if (array.size() < 2)
        throw Span::Size();
    std::sort(array.begin(), array.end());
    int mSpan = std::abs(array[1] - array[0]);

    for (size_t i = 1; i < array.size() - 1; ++i) 
    {
        int span = std::abs(array[i + 1] - array[i]);
        if (span < mSpan)
            mSpan = span;
    }
    return mSpan;
}

void	Span::addMultiple(int first, int last)
{
	int num_toadd = std::abs(last - first + 1);
	if (array.size() + num_toadd > value)
		throw std::runtime_error("Size Can't hold digits");
	for (int i = first ; i <= last ; i++)
		addNumber(i);
}