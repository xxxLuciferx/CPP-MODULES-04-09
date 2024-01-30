/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:38:18 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/30 12:53:51 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *test = new Data;
    uintptr_t ptr;

    test->line = "khalil";
    test->number = 42;

    std::cout << test->line << " | " << test->number << std::endl;
    ptr = Serializer::serialize(test);
    test = Serializer::deserialize(ptr);
    std::cout << test->line << " | " << test->number << std::endl;
    
    delete test;
}