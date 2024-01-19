/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:14:08 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/19 21:45:57 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("FillForm"), signStatus(false), gradeToSign(150), gradeToExecute(150)
{
}

Form::Form(const std::string form, const int gradeToSign, const int gradeToExecute): name(form), signStatus(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

std::string Form::get_name() const
{
    return name;
} 

int Form::get_gradeToSign() const
{
    return gradeToSign;
}

int Form::get_gradeToExecute() const
{
    return gradeToExecute;
}

bool    Form::get_signStatus() const
{
    return signStatus;
}

void    Form::beSigned(const Bureaucrat& name)
{
    if(name.getGrade() <= this->get_gradeToSign())
    {
        this->signStatus = true;
        std::cout << "Form Signed by " << name.getName() << std::endl;
    }
    else
        throw GradeTooLowException();
}

Form::~Form()
{
    
}

std::ostream& operator<<(std::ostream& out, const Form& Formpaper)
{
        out << "Form Name: " << Formpaper.get_name() << ", Signed: " << (Formpaper.get_signStatus() ? "Yes" : "No") << ", Grade Required to Sign: " << Formpaper.get_gradeToSign() << ", Grade Required to Execute: " << Formpaper.get_gradeToExecute();
        return out;
}
