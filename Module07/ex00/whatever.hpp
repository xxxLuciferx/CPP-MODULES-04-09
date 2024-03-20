/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:00:45 by khaimer           #+#    #+#             */
/*   Updated: 2024/03/20 17:23:36 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename Glob>
void    swap(Glob &A, Glob &B);


template <typename Glob1>
Glob1   min(Glob1 &Val_a, Glob1 &Val_b);

template <typename Glob2>
Glob2   max(Glob2 &Val_a, Glob2 &Val_b);