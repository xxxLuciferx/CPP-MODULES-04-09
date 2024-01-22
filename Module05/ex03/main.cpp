/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:03:42 by khaimer           #+#    #+#             */
/*   Updated: 2024/01/22 01:40:34 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int main() {
    Intern intern;

    AForm* form1 = intern.makeForm("presidential pardonm", "Bender");
    AForm* form2 = intern.makeForm("presidential pardon", "Fry");
    AForm* form3 = intern.makeForm("robotomy request", "Leela");

    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    system("leaks intern");
    return 0;
}