/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:23:51 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/22 02:14:44 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T* elements;
		unsigned int size;
	public:
		Array():elements(NULL) ,size(0);
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
			delete[] element;
			size_ = other.size_;
			element = new T[size_];
			for (unsigned int i = 0; i < size_ ; i++)
				element[i] = other.element[i];
			return (*this);
    	}

    	~Array()
    	{
    	    delete[] elements;
    	}

    	T& operator[](size_t index)
    	{
    	    if (i < 0 || i >= size)
				throw std::exception();
			return (element[i]);
    	}

    size_t len() const
    {
        return size;
    }
};