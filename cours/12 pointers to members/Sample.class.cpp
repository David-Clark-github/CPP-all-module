/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:28:24 by dclark            #+#    #+#             */
/*   Updated: 2022/02/06 21:37:47 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"

Sample::Sample(char *name)
:foo(0), str(name)
{
	std::cout << "Constructeur " << this->str << " called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructeur " << this->str << " called" << std::endl;
	return;
}

void	Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return;
}
