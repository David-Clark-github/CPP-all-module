/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:07:45 by dclark            #+#    #+#             */
/*   Updated: 2022/02/02 10:19:23 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "Sample.class.h"

Sample::Sample(void)
{
	std::cout << "constructeur Sample called" << std::endl;
	
	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
	
	return;
}

Sample::~Sample(void)
{
	std::cout << "destructeur ~Sample called" << std::endl;
	return;
}

void	Sample::publicBar(void)const
{
	std::cout << "function Member publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar(void)const
{
	std::cout << "function Member _privateBar called" << std::endl;
	return;
}
