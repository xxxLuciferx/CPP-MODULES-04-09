/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:09:51 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/23 22:37:25 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : array(0), value(0){}

Span::Span(unsigned int number) : array(std::vector<unsigned int>()), value(number){}

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

void	Span::addNumbers(int first, int last)
{
	int num_toadd = std::abs(last - first + 1);
	if (this->my_vector.size()  + num_toadd > this->N)
		throw std::runtime_error("size out of range permited");
	for (int i = first ; i <= last ; i++)
		this->addNumber(i);
}