/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:31 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/12 18:29:02 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    if (ac > 1)
    {
        try
        {
            PmergeMe Data;
            
            Data.parsing(ac, av);
            Data.print_stack(Data);
            Data.MergeInsert_vec(Data);
            Data.MergeInsert_deq(Data);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        std::cerr << "Incorrect argument sequence \n";
        return 1;
    }
    return 0;
}