/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:23:51 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/22 15:47:09 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T* elements;
		unsigned int size;
	public:
		Array():elements(NULL) ,size(0){}
    	Array(unsigned int n) : size(n)
    	{
    	    elements = new T[n];
    	    for (unsigned int i = 0; i < n; i++)
    	        elements[i] = T();
    	}

    	Array(const Array<T> &other) : size(other.size)
    	{
    	    this->elements = new T[this->size];
    	    for (size_t i = 0; i < size; i++)
    	    {
    	        this->elements[i] = other.elements[i];
    	    }
    	}

    	Array& operator=(const Array<T> &other)
    	{
			if (this == &other)
				return (*this);
			delete[] elements;
			size = other.size;
			elements = new T[size];
			for (unsigned int i = 0; i < size ; i++)
				elements[i] = other.elements[i];
			return (*this);
    	}

    	~Array()
    	{
    	    delete[] elements;
    	}

    	T& operator[](std::size_t index)
    	{
    	    if (index >= size)
				throw std::exception();
			return (elements[index]);
    	}

    size_t len() const
    {
        return size;
    }
};