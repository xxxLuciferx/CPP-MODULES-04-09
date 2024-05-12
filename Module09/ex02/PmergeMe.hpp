/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:38 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/12 17:22:34 by khaimer          ###   ########.fr       */
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
        // void    partition(std::vector<int> &arr);
        // void    sortPlace(const std::vector<int> &left, const std::vector<int> &right, std::vector<int> &arr); //NEW
        void    insertWithLowerBound(std::vector<int>& first, std::vector<int>& second);


        
        
     
    
    

};

