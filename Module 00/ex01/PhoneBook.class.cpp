/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:46:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/08 18:11:08 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.h"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void)
{
	setExit(0);
	setRepLen(0);
	for (int i = 0; i < 8; i++) {
		this->Repertoir[i].setInd(0);
		this->Repertoir[i].setTab("(vide)", ipre);
		this->Repertoir[i].setTab("(vide)", inom);
		this->Repertoir[i].setTab("(vide)", isur);
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

int		PhoneBook::getRepLen(void)const {
	return this->_RepLen;
}

void	PhoneBook::setRepLen(int r) {
	this->_RepLen = r;
}

void	PhoneBook::displayInd(int index) {
	int	len = 0;
	int	tmp = index;
	int	len_d;
	if (index == 0)
		len = 1;
	for (; tmp; tmp /= 10)
		len++;
	len_d = 10 - len;
	std::cout << "|";
	for (int i = 0; i < len_d; i++)
		std::cout << ' ';
	std::cout << index << '|';
}

void	PhoneBook::displayString(std::string str) {
	int	len_d;
	len_d = 10 - str.length();
	if (len_d < 0) {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".|";
	} else {
		for (int i = 0; i < len_d; i++)
			std::cout << ' ';
		std::cout << str << '|';
	}
}

void	PhoneBook::displayContacts(Contact Repertoir[8]) {
	for (int i = 0; i < 8; i++) {
		displayInd(Repertoir[i].getInd());
		displayString(Repertoir[i].getTab(ipre));
		displayString(Repertoir[i].getTab(inom));
		displayString(Repertoir[i].getTab(isur));
		std::cout << std::endl;
	}
}

void	PhoneBook::addContact(Contact Repertoir[8], int RepLen) {
	while (Repertoir[RepLen].getTab(ipre).compare("(vide)") == 0) {
		std::cout << "Please enter a name: ";
		std::getline(std::cin, this->tmp);
		Repertoir[RepLen].setTab(this->tmp, ipre);
		std::cout << std::endl;
	}
	//std::cout << "result is: " << std::endl;
	//PhoneBook::displayContact(Repertoir);
}