/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:38 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/06 20:23:13 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <vector>
#include <iostream>
#include <exception>
#include <string>
#include <utility>
#include <sys/time.h>
#include <sstream>


class PmergeMe
{
        std::vector<int> Remain;
    public:
        std::vector< std::vector<int> > vectors;
        std::vector<int> Before;
        void    recursive_function();
        void    parsing(int ac, char **av);
        void    printf_before_line(PmergeMe Data);
        
        
     
    
    

};

