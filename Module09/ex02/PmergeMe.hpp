/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:38 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/12 22:23:59 by khaimer          ###   ########.fr       */
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
#include <iomanip>
// #include <time.h>


class PmergeMe
{
        std::vector<int> Before;
        std::vector< std::pair <int, int> > vec_pairs;
        std::deque< std::pair <int, int> > deq_pairs;
        int Remain;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe& operator=(const PmergeMe &other);
        
        
        void    recursive_function();
        void    parsing(int ac, char **av);
        void    print_stack(PmergeMe Data);
        void    MergeInsert_vec(PmergeMe khalil);
        void    MergeInsert_deq(PmergeMe khalil);
        void    insertWithLowerBound_vec(std::vector<int>& main, std::vector<int>& peind);
        void    insertWithLowerBound_deq(std::deque<int>& main, std::deque<int>& peind);

        ~PmergeMe();
};
