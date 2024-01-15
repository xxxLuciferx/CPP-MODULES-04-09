/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:39:14 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/15 13:25:56 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private :
        const std::string Name;
        int     Grade;
    public :
        Bureaucrat();
        Bureaucrat(const std::string Name, int Grade);

        const std::string getName() const;
        int getGrade() const;
        ~Bureaucrat();
};

#endif