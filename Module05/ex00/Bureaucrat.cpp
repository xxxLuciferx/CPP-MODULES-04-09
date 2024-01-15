/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:55:29 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/15 13:27:47 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name(""), Grade(150)
{
}

// Bureaucrat::Bureaucrat(const std::string& Name, int Grade): Name(Name)
// {
//     if (Grade > 0 && Grade < 151)
//     {
//         this->Grade = Grade;
//     }
//     else
    
// }

const std::string Bureaucrat::getName() const
{
    return this->Name;
}

Bureaucrat::~Bureaucrat()
{
    
}

int Bureaucrat::getGrade() const
{
    return this->Grade;
}