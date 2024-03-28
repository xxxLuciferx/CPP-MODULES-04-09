/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 01:49:41 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/28 22:36:12 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <iterator>


template < typename T>
class MutantStack : public std::stack<T>
{
	private :
		std::stack<T>  stack;
	public :
		MutantStack() {};
		~MutantStack() {};
		typedef typename  std::deque<T>::iterator iterator;
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				this->c = other.c;
			return (*this);
		}
		iterator	begin(void) {return this->c.begin();}
		iterator	end(void){return this->c.end();}
};