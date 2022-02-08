/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:46:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/08 13:14:38 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.h"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void)
{
	this->_Exit = 0;
	this->_RepLen = 0;
	for (int i = 0; i < 8; i++) {
		this->Repertoir[i].setInd(0);
		this->Repertoir[i].setTab("012345678", ipre);
	}
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int		PhoneBook::getExit(void)const {
	return this->_Exit;
}

void	PhoneBook::setExit(int e) {
	this->_Exit = e;
}

void	PhoneBook::displayInd(int index) {
	int	len = 0;
	int	tmp = index;
	int	len_d;
	for (; tmp; tmp /= 10)
		len++;
	len_d = 10 - len;
	for (int i = 0; i < len_d; i++)
		std::cout << ' ';
	std::cout << index << '|';
}

void	PhoneBook::displayPre(std::string prenom) {
	int	len_d;
	len_d = 10 - prenom.length();
	if (len_d < 0) {
		for (int i = 0; i < 9; i++)
			std::cout << prenom[i];
		std::cout << ".|";
	} else {
		for (int i = 0; i < len_d; i++)
			std::cout << ' ';
		std::cout << prenom << '|';
	}
}

void	PhoneBook::displayContacts(Contact Repertoir[8]) {
	displayInd(Repertoir[0].getInd());
	displayPre(Repertoir[0].getTab(ipre));
	std::cout << std::endl;
}
