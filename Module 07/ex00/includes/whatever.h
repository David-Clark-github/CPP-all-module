/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:54:36 by david             #+#    #+#             */
/*   Updated: 2022/04/18 14:03:00 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	swap(T & a, T & b);

template<typename T>
T	min(const T & a, const T & b);

template<typename T>
T	max(const T & a, const T & b);
