/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:46:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/07 14:06:30 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.h"

PhoneBook::PhoneBook(void)
{
	this->_exit = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int		PhoneBook::getExit(void)const {
	return this->_exit;
}

void	PhoneBook::setExit(int e) {
	this->_exit = e;
}
