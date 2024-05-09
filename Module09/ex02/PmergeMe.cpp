/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:35 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/09 22:49:28 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    PmergeMe::MergeInsert_vec(PmergeMe Data)
{
    std::cout << "\nLet's Start having fun\n\n\n";

	
	// for (std::vector<int >::iterator it = Data.Before.begin(); it != Data.Before.end(); it++)
    // {
    // 	std::vector<int> tmp;
    //     tmp.push_back(*it);
    //     Data.Before.push_back(tmp); //make every int in a vector and push it to "Before"
    // }
	
	// for (size_t i = 0; i < Data.Before.size(); ++i) //Print the vector
    //         std::cout << Data.Before[i] << " ";
			
	if (Data.Before.size() % 2 == 1)
		Data.Remain = Data.Before[Data.Before.size() - 1];
	for (size_t i = 0; i < Data.Before.size() - 1; i += 2)
	    Data.vec_pairs.push_back(std::make_pair(Data.Before[i], Data.Before[i + 1]));
	for (size_t i = 0; i < Data.vec_pairs.size(); i++)
	{
		if (Data.vec_pairs[i].first < Data.vec_pairs[i].second)
			std::swap(Data.vec_pairs[i].first , Data.vec_pairs[i].second);
	}
		// std::cout << "In Pairs : \n";
	    // for (std::vector<std::pair<int, int> >::iterator it = Data.vec_pairs.begin(); it != Data.vec_pairs.end(); ++it)
	    // {
	    //     std::cout << "(" << it->first << ", " << it->second << ") ";
	    // }
		// std::cout << std::endl;
		// std::cout << std::endl;
		// std::cout << std::endl;
		std::sort(Data.vec_pairs.begin(), Data.vec_pairs.end());
	    // for (std::vector<std::pair<int, int> >::iterator it = Data.vec_pairs.begin(); it != Data.vec_pairs.end(); ++it)
	    // {
	    //     std::cout << "(" << it->first << ", " << it->second << ") ";
	    // }
		// std::cout << std::endl;
		// std::cout << std::endl;
		// std::cout << std::endl;
		std::vector<int> ve_main;
		std::vector<int> ve_peind;
		for (size_t i = 0; i < Data.vec_pairs.size(); i++)
		{
			ve_main.push_back(Data.vec_pairs[i].first);
			ve_peind.push_back(Data.vec_pairs[i].second);
		}
		// for (size_t i = 0; i < ve_main.size(); i++)
		// {
		// 	std::cout << ve_main[i] << " ";
		// }
		// std::cout << std::endl;
		// for (size_t i = 0; i < ve_peind.size(); i++)
		// {
		// 	std::cout << ve_peind[i] << " ";
		// }
		
		
		
}

void    PmergeMe::print_stack(PmergeMe Data)
{
    std::cout << "Before: ";
	std::vector<int >::iterator it;
    for (it = Data.Before.begin(); it != Data.Before.end(); it++)
        std::cout << *it << " ";
	std::cout << std::endl;
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
	        while (values >> Value_readed) //Readin from the big string stream to check short stream
	        {
	        	if (Value_readed.find_first_not_of("0123456789") != std::string::npos || Value_readed.length() > 10) 
	        		throw std::runtime_error("Ivalid input: Only integers possible");
	        	number = std::stoll(Value_readed.c_str());
	        	if (number >= 0 && number <= 2147483647)
	        		this->Before.push_back(number); //Push to before
	        	else
	        		throw std::runtime_error("Error.");
	        }
            check_for_dup(this->Before);
}