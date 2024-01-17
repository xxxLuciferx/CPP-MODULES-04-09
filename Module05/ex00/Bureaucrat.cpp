/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:55:29 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/17 18:27:01 by khaimer          ###   ########.fr       */
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



Bureaucrat::Bureaucrat(const std::string& Name, int Grade) : Name(Name) 
{
    if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
    this->Grade = Grade;
}


const char* Bureaucrat::GradeTooLowException.what() const throw() 
{
    return "Grade too low";
};