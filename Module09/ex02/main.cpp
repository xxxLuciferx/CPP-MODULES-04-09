/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:31 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/06 20:21:16 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    print_before_line()
{
    // std::vector<int> tmp;
    
    std::cout << "Before: ";
    // for (std::vector<int >::iterator it = this->Before.begin() ; it != this->Before.end(); it++)
    // {
    //     std::cout << *it << " "; //print
    //     tmp.push_back(*it);
    //     this->vectors.push_back(tmp); //make every int in a vectore and push it to "vectors"
    //     tmp.clear();
    // }
    
}
int main(int ac, char **av)
{
    
    PmergeMe khalil;
    // std::vector<int> vec;
    if (ac > 1)
    {
        try
        {
            khalil.parsing(ac, av);
            khalil.printf_before_line(khalil);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        std::cerr << "bad input \n";
        return 1;
    }
    return 0;
}