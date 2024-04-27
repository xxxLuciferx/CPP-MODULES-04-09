/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:35 by khaimer           #+#    #+#             */
/*   Updated: 2024/04/27 19:14:06 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

    // for (std::vector<std::vector <int> >::iterator outerIt = vectors.begin(); outerIt != vectors.end(); ++outerIt) 
    // {
    //     for (std::vector<int>::iterator innerIt = outerIt->begin(); innerIt != outerIt->end(); ++innerIt) 
    //     {
    //         std::cout << *innerIt << " ";
    //     }

void    PmergeMe::recursive_function()
{
    std::vector< std::vector<int> > tmp;
    int i = 0;
    // std::cout << "\n" << this->Before.back() << " This out\n";
    if (vectors.size() % 2 == 1)
    {
        this->Remain.push_back(this->Before.back());
        vectors.pop_back();  
    }
    while (vectors.begin() + i < vectors.end())
    {
        
    }
    
    
    
    
}

void check_for_dup(std::vector<int> vec)
{
	if (vec.size() < 2)
		throw std::runtime_error("Error : Cannot sort one number");
	for (size_t i = 0; i < vec.size(); i++)
	{
		for (size_t j = (i + 1); j < vec.size() ; j++)
		{
			if (vec[i] == vec[j])
				throw std::runtime_error("Error : check_for_dup numbers.");
		}
	}
}

void    PmergeMe::parsing(int ac, char **av)
{
            std::string str;
	        for (int i = 1; i < ac; i++)
	        {
	        	str += av[i];
	        	if (i < ac - 1)
	        		str += " ";
	        }
            std::istringstream values(str.c_str());
            std::string	Value_readed;
            unsigned long long number;
	        while (values >> Value_readed)
	        {
	        	if (Value_readed.find_first_not_of("0123456789") != std::string::npos || Value_readed.length() > 10)
	        		throw std::runtime_error("Ivalid input");
	        	number = std::stoll(Value_readed.c_str());
	        	if (number >= 0 && number <= 2147483647)
	        		this->Before.push_back(number);
	        	else
	        		throw std::runtime_error("Error.");
	        }
            check_for_dup(this->Before);
            std::cout << "Before: ";
            std::vector<int> tmp;
            for (std::vector<int >::iterator it = this->Before.begin() ; it != this->Before.end(); it++) //print
            {
                std::cout << *it << " ";
                tmp.push_back(*it);
                this->vectors.push_back(tmp);
                tmp.clear();
            }
            PmergeMe::recursive_function();
}