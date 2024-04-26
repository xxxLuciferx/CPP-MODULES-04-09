/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:31 by khaimer           #+#    #+#             */
/*   Updated: 2024/04/27 00:51:29 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    std::vector<int> vec;
    std::vector<std::vector<int>> matrice;
    
    if (ac > 1)
    {
        // vec.push_back(atoi[i]);
        // matrice.pop_back(vec);
        vec.clear();
        std::string str;
	    for (int i = 1; i < ac; i++)
	    {
	    	str += av[i];
	    	if (i < ac - 1)
	    		str += " ";
	    }
        std::cout << str;
        
    }
    else
    {
        std::cerr << "bad input \n";
        return 1;
    }
    return 0;
}