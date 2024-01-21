/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:39:14 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/20 10:40:12 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private :
        const std::string Name;
        int     Grade;
    public :
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
        Bureaucrat();
        Bureaucrat(const std::string& Name, int Grade);
        Bureaucrat& operator=(const Bureaucrat& other);
        
        void    increment();
        void    decrement();
        
        
        const std::string getName() const;
        int getGrade() const;
        void    signForm(AForm& paper);
        
        ~Bureaucrat();
};

std::ostream&    operator<<(std::ostream& COUT, const Bureaucrat& info);

#endif