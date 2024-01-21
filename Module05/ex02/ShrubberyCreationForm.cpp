/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:19:48 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 13:09:32 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& papername) : AForm(papername, 145, 137, "")
{  
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{   
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) 
{
    (void)obj;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const 
{
    if (executor.getGrade() <= get_gradeToExecute() && get_signStatus()) 
    {
        std::ofstream on(get_name() + "_shrubbery");
        on << "        _-_         \n";
        on << "     //~~   ~~\\    \n";
        on << "  //~~         ~~\\ \n";
        on << " {               }  \n";
        on << "  \\  _-     -_ //  \n";
        on << "    ~  \\ //  ~     \n";
        on << "        | |         \n";
        on << "        | |         \n";
        on << "       // \\        \n";
    } 
    else 
    {
        throw GradeTooLowException();
    }
}