/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 01:49:24 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/28 22:35:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> khalil;
	MutantStack<int>::iterator tp1;
	MutantStack<int>::iterator tp2;

	khalil.push(5);
	khalil.push(6);
	khalil.push(33);
	khalil.push(78);
	khalil.push(78);
	khalil.push(478);
	khalil.push(3478);
	khalil.push(738);
	std::cout << "> " << khalil.size() << " <" << std::endl;
	// size_t i = khalil.size();
	// while (i)
	// {
	// 	std::cout << khalil.top() << std::endl;
	// 	khalil.pop();
	// 	i--;
	// }
	std::cout << "        --------" << std::endl;
	tp1 = khalil.begin();
	tp2 = khalil.end();
	while (tp2 != tp1)
	{
		std::cout << *tp1 << " ";
		tp1++;
	}
	
	
	
	
	return 0;
}