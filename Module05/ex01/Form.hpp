/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:14:11 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/20 14:20:02 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool signStatus;
        const int gradeToSign;
        const int gradeToExecute;
    
    public:
        class GradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw() 
                {
                    return "Grade too high";
                }
        };
        class GradeTooLowException : public std::exception 
        {
             public:
                 const char* what() const throw() 
                 {
                     return "Grade too low";
                 }
        };

        Form();
        Form(const Form& other);
        Form(const std::string form, const int gradeToSign, const int gradeToExecute);

        Form& operator=(const Form& other);

        std::string get_name() const;    
        int    get_gradeToSign() const;
        int    get_gradeToExecute() const;
        bool    get_signStatus() const;
        
        void    beSigned(const Bureaucrat& name);
        
        ~Form();
};


std::ostream& operator<<(std::ostream& out, const Form& Formpaper);