/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:31:51 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 15:02:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{
    private:
        Intern(const Intern&);
        Intern& operator=(const Intern&);
    public:
        Intern();
        ~Intern();

    
	    AForm* createRobotomyRequestForm(std::string const &target);
	    AForm* createShrubberyCreationForm(std::string const &target);
	    AForm* createPresidentialPardonForm(std::string const &target);
    
        AForm* makeForm(const std::string& formName,const std::string& target);
};