/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:14:11 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/18 22:34:01 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
    private:
        const std::string name;
        bool signStatus;
        const int gradeRequiredToSign;
        const int gradeRequiredToExecute;
        
    public:
        Form();
        Form(c);
    
}

#endif