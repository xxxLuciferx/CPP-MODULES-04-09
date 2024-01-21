/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:14:11 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 13:16:31 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool signStatus;
        const int gradeToSign;
        const int gradeToExecute;
        
        const std::string target; 
    
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

        AForm();
        // AForm(const std::string Aform, const int gradeToSign, const int gradeToExecute);
        AForm(const std::string Aform, const int gradeToSign, const int gradeToExecute, const std::string target);
        AForm(const AForm& other);
        AForm& operator=(const AForm& obj);

        std::string get_name() const;    
        int    get_gradeToSign() const;
        int    get_gradeToExecute() const;
        bool    get_signStatus() const;
        std::string get_Target() const;

        virtual void execute(const Bureaucrat& executor) const = 0;

        void    beSigned(const Bureaucrat& name);
        
        virtual ~AForm();
};


std::ostream& operator<<(std::ostream& out, const AForm& AFormpaper);