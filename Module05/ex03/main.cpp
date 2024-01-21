/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:03:42 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/21 15:14:06 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int main() {
    Intern intern;

    AForm* form1 = intern.makeForm("shrubbery creationm", "Bender");
    AForm* form2 = intern.makeForm("presidential pardon", "Fry");
    AForm* form3 = intern.makeForm("robotomy request", "Leela");

    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomyrequest", "Bender");

    if (form1)
        delete form1;
    if (form2)
        delete form2;
    if (form3)
        delete form3;
    return 0;
}