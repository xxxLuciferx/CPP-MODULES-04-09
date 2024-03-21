/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:33:15 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/21 16:26:38 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename arr, typename F>
void    iter(arr *array, size_t length, void (*func)(F));

class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
{ 
    o << rhs.get(); 
    return o;
}

template <typename arr>
void    print(arr &array);

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
