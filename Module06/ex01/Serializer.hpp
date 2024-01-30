/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:57:35 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/30 10:37:12 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef struct t_data
{
    int number;
    std::string line;
} Data;

class Serializer 
{
    private:
        Serializer();
        Serializer(const Serializer&);
        Serializer& operator=(const Serializer&);
    
    public:
        ~Serializer();
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);    
};
