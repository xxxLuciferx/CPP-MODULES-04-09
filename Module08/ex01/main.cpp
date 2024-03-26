/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:52:41 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/26 01:04:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::vector<unsigned int> myvector;
    unsigned int value = 8;
    Span A(value);
    
    A.addNumbers(20);
    A.addNumbers(50);
    A.addNumbers(80);
    A.addNumbers(100);
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(2);
    
    
    std::cout << "khalil" << std::endl;
    for (size_t i = 0; i < myvector.size(); i++)
    {
        std::cout << myvector[i] << " ";
    }
    
}