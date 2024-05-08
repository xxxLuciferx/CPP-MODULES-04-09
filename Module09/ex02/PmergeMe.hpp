/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:38 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/08 22:46:02 by khaimer          ###   ########.fr       */
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
        int Remain;
        std::vector<int> Before;
        std::vector< std::pair <int, int> > vec_pairs;
    public:
        void    recursive_function();
        void    parsing(int ac, char **av);
        void    print_stack(PmergeMe Data);
        void    MergeInsert_vec(PmergeMe khalil);
        
        
     
    
    

};

