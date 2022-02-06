/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:37:56 by david             #+#    #+#             */
/*   Updated: 2022/02/01 12:49:47 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.h"

Sample::Sample(float const f1)
:pi(f1), qd(42) 
{
	std::cout << "constructeur Sample called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructeur Sample called" << std::endl;
	return;
}

void	Sample::bar(void) const
{
	std::cout << "this->pi: " << this->pi << std::endl;
	std::cout << "this->dq: " << this->qd << std::endl;
	return;
}
