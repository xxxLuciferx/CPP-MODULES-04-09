/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:23:28 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/22 15:52:19 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
    Array<int> arr(5);
    for (std::size_t i = 0; i < arr.len(); i++)
    {
        arr[i] = i * 10;
        std::cout << "arr1[" << i << "] = " << arr[i] << std::endl;
    }
    return 0;
}