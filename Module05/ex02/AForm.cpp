/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:14:08 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 13:07:26 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("FillAForm"), signStatus(false), gradeToSign(150), gradeToExecute(150)
{
}

AForm::AForm(const std::string Aform, const int gradeToSign, const int gradeToExecute, const std::string target): name(Aform), signStatus(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), target(target)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm& other) : gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) 
{
    (void)other;
}

AForm& AForm::operator=(const AForm& obj) 
{
    (void)obj;
    return *this;
}

std::string AForm::get_name() const
{
    return name;
} 

int AForm::get_gradeToSign() const
{
    return gradeToSign;
}

int AForm::get_gradeToExecute() const
{
    return gradeToExecute;
}

bool    AForm::get_signStatus() const
{
    return signStatus;
}

void    AForm::beSigned(const Bureaucrat& name)
{
    if(name.getGrade() <= this->get_gradeToSign())
    {
        this->signStatus = true;
        std::cout << "AForm Signed by " << name.getName() << std::endl;
    }
    else
        throw GradeTooLowException();
}

AForm::~AForm()
{
    
}

std::ostream& operator<<(std::ostream& out, const AForm& AFormpaper)
{
        out << "AForm Name: " << AFormpaper.get_name() << ", Signed: " << (AFormpaper.get_signStatus() ? "Yes" : "No") << ", Grade Required to Sign: " << AFormpaper.get_gradeToSign() << ", Grade Required to Execute: " << AFormpaper.get_gradeToExecute();
        return out;
}
