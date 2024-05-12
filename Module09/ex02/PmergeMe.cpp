/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:34:35 by khaimer           #+#    #+#             */
/*   Updated: 2024/05/12 17:26:21 by khaimer          ###   ########.fr       */
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
		// std::cout << std::endl;
		// for (size_t i = 0; i < ve_peind.size(); i++)
		// {
		// 	std::cout << ve_peind[i] << " ";
		// }
		// partition(ve_main); 
		// std::cout << "\nWESH A BATAL\n";
		// for (size_t i = 0; i < ve_main.size(); i++)
		// {
		// 	std::cout << ve_main[i] << " ";
		// }
		insertWithLowerBound(ve_main, ve_peind);
		for (size_t i = 0; i < ve_main.size(); i++)
		{
			std::cout << ve_main[i] << " ";
		}
		std::cout << "The array is sorted\n";
}

void PmergeMe::insertWithLowerBound(std::vector<int>& first, std::vector<int>& second) {
    for (size_t i = 0; i < second.size(); ++i) 
    {
        if (second[i] == -1)
            continue;
        std::vector<int>::iterator it = std::lower_bound(first.begin(), first.end(), second[i]);
        
        first.insert(it, second[i]);
    }
}

// void PmergeMe::sortPlace(const std::vector<int> &left, const std::vector<int> &right, std::vector<int> &arr) //NEW
// {

//     int i = 0, j = 0, k = 0;
//     int n1 = left.size();
//     int n2 = right.size();

//     while (i < n1 && j < n2) {
//         if (left[i] <= right[j]) {
//             arr[k++] = left[i++];
//         } else {
//             arr[k++] = right[j++];
//         }
//     }

//     while (i < n1) {
//         arr[k++] = left[i++];
//     }

//     while (j < n2) {
//         arr[k++] = right[j++];
//     }
// }

// void PmergeMe::partition(std::vector<int> &arr) //NEW
// {
//     int size = arr.size();
//     if (size <= 1)
//         return;
//     else 
// 	{
//         int mid = size / 2;
//         std::vector<int> left(arr.begin(), arr.begin() + mid);
//         std::vector<int> right(arr.begin() + mid, arr.end());

//         partition(left);
//         partition(right);
        
//         sortPlace(left, right, arr);
//     }
// }

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