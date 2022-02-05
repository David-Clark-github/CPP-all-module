/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:28:24 by dclark            #+#    #+#             */
/*   Updated: 2022/02/05 19:10:24 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"

Sample::Sample(void)
:foo(0)
{
	std::cout << "constructeur Sample called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "destructeur Sample called" << std::endl;
	return;
}

void	Sample::bar(void) const
{
	std::cout << "member function bar called" << std::endl;
	return;
}
