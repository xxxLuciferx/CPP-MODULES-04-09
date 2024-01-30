/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:36:12 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/30 17:44:08 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"

Base* generate(void)
{
    int numb = rand() % 3;
    Base *ptr = NULL;
    
    if (numb == 2)
        ptr = new A;
    else if (numb == 1)
        ptr = new B;
    else if (numb == 0)
        ptr = new A;
    
    return (ptr);
}

void identify(Base* p)
{
    
}