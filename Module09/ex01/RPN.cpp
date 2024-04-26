/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:44:34 by khaimer           #+#    #+#             */
/*   Updated: 2024/04/26 17:44:15 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


bool    new_operator(char variable)
{
    if (variable == '+' || variable == '-' || variable == '*' || variable == '/')
        return true;
    return false;
    
}

void    calculation(std::stack<int> &stack, char operation) 
{
    if (stack.size() < 2)
                throw std::runtime_error("Error : Unsuccessfull calculation");
    int a = stack.top();
    stack.pop();
    int b = stack.top();
    stack.pop();
    if (operation == '+')
        stack.push(a + b);
    else if (operation == '*')
        stack.push(a * b);
    else if (operation == '-')
        stack.push(b - a);
    else if (operation == '/')
    {
        if (b == 0)
            throw std::runtime_error("operation cannot divide by 0");
        stack.push(a / b);
    }
}
int     execution(const std::string &Value)
{
    std::stack<int> S;
    int i = 0;
    
    while (Value[i])
    {
        if (new_operator(Value[i]))
            calculation(S, Value[i]);
        else if (std::isdigit(Value[i]))
            S.push(Value[i] - 48);
        i++;
    }
    if (S.size() > 1)
        throw std::runtime_error("invalid Calculation");
    std::cout << S.top() << std::endl;
    return 0;
    


    
}