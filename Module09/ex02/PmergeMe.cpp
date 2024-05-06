/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:35 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/06 20:23:02 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// void PmergeMe::recursive_function()
// {
//     std::vector<std::vector<int> > tmp; // Temporary vector of vectors

//     if (vectors.size() % 2 == 1)
//     {
//         int last = this->Before.back();
//         this->Remain.push_back(last);
//         vectors.pop_back();
//     }
        
    
// }


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

void    print_before_line(PmergeMe Data)
{
    std::vector<int> tmp;
    
    std::cout << "Before: ";
    for (std::vector<int >::iterator it = Data.Before.begin() ; it != Data.Before.end(); it++)
    {
        std::cout << *it << " "; //print
        tmp.push_back(*it);
        Data.vectors.push_back(tmp); //make every int in a vectore and push it to "vectors"
        tmp.clear();
    }
    
}
void    PmergeMe::parsing(int ac, char **av)
{
    //Adding integer to vectore of int "Before"
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

            // std::cout << Before[0] << std::endl;
            // PmergeMe::recursive_function();
}