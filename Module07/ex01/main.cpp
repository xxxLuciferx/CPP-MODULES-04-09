/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:33:22 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/21 16:30:32 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


template <typename arr, typename F>
void    iter(arr *array, size_t length, void (*func)(F))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

template <typename arr>
void    print(arr &array)
{
    std::cout << "Print Called |" << array << std::endl;
}



int main() 
{
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];
    iter( tab, 5, print );
    iter( tab2, 5, print );
    // iter( tab, 5, print<const int> );
    // iter( tab2, 5, print<Awesome> ); 
    return 0;
}
