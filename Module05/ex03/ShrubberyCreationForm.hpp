/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:19:50 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 13:19:53 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>
#include <iostream>


class ShrubberyCreationForm: public AForm
{
    public:
        ShrubberyCreationForm(); //Done
        ShrubberyCreationForm(const std::string& papername);  //Done
        ShrubberyCreationForm(const ShrubberyCreationForm& other);  //Done
        
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj); //Done
        
        virtual ~ShrubberyCreationForm(); //Done
        
        void execute(Bureaucrat const & executor) const;
};