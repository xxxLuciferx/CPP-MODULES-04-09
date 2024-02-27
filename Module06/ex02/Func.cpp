/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:36:12 by khaimer           #+#    #+#             */
/*   Updated: 2024/02/27 12:35:01 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include <cstdlib>

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

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p); std::cout << "A\n";
    } catch (std::bad_cast&) {}
    try {
        (void)dynamic_cast<B&>(p); std::cout << "B\n";
    } catch (std::bad_cast&) {}
    try {
        (void)dynamic_cast<C&>(p); std::cout << "C\n";
    } catch (std::bad_cast&) {}
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p)) 
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p)) 
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";                  
}

int main() 
{
    Base *base = generate();
    identify(base); 
    identify(*base);

    delete base;
    return 0;
}