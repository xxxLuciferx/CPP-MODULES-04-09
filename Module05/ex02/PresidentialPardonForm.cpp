/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:31:45 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 13:16:57 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm(target, 25, 5, "")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() <= get_gradeToExecute() && get_signStatus())
    {
        std::cout << get_Target() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
    {
        throw GradeTooLowException();
    }
}
