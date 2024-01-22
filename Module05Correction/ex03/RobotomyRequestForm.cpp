/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:05:27 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 13:09:54 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "") 
{   
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name) : AForm(name, 72, 45, "") 
{   
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other) 
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj)
        AForm::operator=(obj);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const& bureaucrat) const
{
    if (bureaucrat.getGrade() <= get_gradeToExecute() && get_signStatus()) 
    {
        std::cout << "Drilling noises... ";
        if (rand() % 2 == 0)
            std::cout << get_name() << " has been robotomized successfully!" << std::endl;
        else
            std::cout << "Robotomy failed for " << get_name() << "." << std::endl;
    } 
    else
        throw GradeTooLowException();
}
