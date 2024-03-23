/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:52:41 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/23 21:46:58 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::vector<unsigned int> myvector;
    unsigned int value = 4294967295;

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(value);
    
    std::cout << "khalil" << std::endl;
    for (size_t i = 0; i < myvector.size(); i++)
    {
        std::cout << myvector[i] << " ";
    }
    
}