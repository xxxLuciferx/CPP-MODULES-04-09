/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:59:54 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/20 17:28:40 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename Glob>
void    swap(Glob &A, Glob &B)
{
    Glob tmp;
    tmp = A;
    A = B;
    B = tmp;
}

template <typename Glob1>
Glob1   min(Glob1 &Val_a, Glob1 &Val_b)
{
    return (Val_a < Val_b) ? Val_a : Val_b;
}

template <typename Glob2>
Glob2   max(Glob2 &Val_a, Glob2 &Val_b)
{
    return (Val_a > Val_b) ? Val_a : Val_b;
}

int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}