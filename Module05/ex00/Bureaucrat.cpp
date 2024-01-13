/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:55:29 by khaimer           #+#    #+#             */
/*   Updated: 2023/11/30 15:06:36 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& Name, int Grade): Name(Name)
{
    if (Grade > 0 && Grade < 151)
    {
        this->Grade = Grade;
    }
    else
        
    
    
}