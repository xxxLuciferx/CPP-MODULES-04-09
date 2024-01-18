/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:55:29 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/18 18:04:34 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("Default"), Grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& Name, int Grade) : Name(Name) 
{
    if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
    else
        this->Grade = Grade;
}

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


void    Bureaucrat::increment()
{
    if (Grade < 2)
        throw GradeTooHighException();
    else
        this->Grade--;
}

void    Bureaucrat::decrement()
{
    if (Grade == 150)
        throw GradeTooLowException();
    this->Grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& info)
{
   out << info.getName() << ", bureaucrat grade " << info.getGrade() << ".\n";
   return out;
}