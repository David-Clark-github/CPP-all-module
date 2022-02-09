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
#include "Utils.class.h"
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

void	PhoneBook::displayInd(int index)const {
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

void	PhoneBook::displayString(std::string str)const {
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

void	PhoneBook::displayContacts(Contact Repertoir[8])const {
	for (int i = 0; i < 8; i++) {
		displayInd(Repertoir[i].getInd());
		displayString(Repertoir[i].getTab(ipre));
		displayString(Repertoir[i].getTab(inom));
		displayString(Repertoir[i].getTab(isur));
		std::cout << std::endl;
	}
}

void	PhoneBook::addContact(Contact Repertoir[8], int RepLen) {
	Utils	Utils;
	Repertoir[RepLen % 8].setInd(RepLen);
	std::cout << "Please enter a first name: ";
	std::getline(std::cin, this->tmp);
	while (this->tmp.empty()) {
			std::cout << "Please enter a non empty first name: ";
			std::getline(std::cin, this->tmp);
	}
	Repertoir[RepLen % 8].setTab(this->tmp, ipre);
	this->tmp = "";
	std::cout << "Please enter a last name: ";
	std::getline(std::cin, this->tmp);
	while (this->tmp.empty()) {
			std::cout << "Please enter a non empty last name: ";
			std::getline(std::cin, this->tmp);
	}
	Repertoir[RepLen % 8].setTab(this->tmp, inom);
	this->tmp = "";
	std::cout << "Please enter a nickname: ";
	std::getline(std::cin, this->tmp);
	while (this->tmp.empty()) {
			std::cout << "Please enter a non empty nickname: ";
			std::getline(std::cin, this->tmp);
	}
	Repertoir[RepLen % 8].setTab(this->tmp, isur);
	this->tmp = "";
	std::cout << "Please enter a phone number: ";
	std::getline(std::cin, this->tmp);
	while (this->tmp.empty() == true || Utils.check_tel(this->tmp) == 0) {
			std::cout << "Please enter a valid phone number: ";
			std::getline(std::cin, this->tmp);
	}
	Repertoir[RepLen % 8].setTab(this->tmp, itel);
	this->tmp = "";
	std::cout << "Please enter a dark secret ";
	std::getline(std::cin, this->tmp);
	while (this->tmp.empty()) {
			std::cout << "Please enter something ... : ";
			std::getline(std::cin, this->tmp);
	}
	Repertoir[RepLen % 8].setTab(this->tmp, isec);
	this->tmp = "";
	PhoneBook::setRepLen(PhoneBook::getRepLen() + 1);
}
