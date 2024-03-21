/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:33:22 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/21 17:21:03 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


template <typename arr, typename F>
void    iter(arr *array, size_t length, void (*func)(F))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

template <typename F>
void    print(F &array)
{
    std::cout << "Print Called |" << array << std::endl;
}


int main()
{
	int array[] = {1, 2, 3, 4};
	size_t lenght = 4;

	std::cout << "Before :" << std::endl;
	for (size_t i = 0 ; i < lenght; i++)
		std::cout << "[" << array[i] << "]" << std::endl;
	
	std::cout << "After :" << std::endl;
	iter(array, lenght, print<int>);
    
	return (0);
}