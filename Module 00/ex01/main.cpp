/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:08:24 by dclark            #+#    #+#             */
/*   Updated: 2022/02/08 17:49:17 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"
#include "PhoneBook.class.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

int		check_cmd(std::string str) {
	int	res;
	if (str.compare("EXIT") == 0)
		return EXIT;
	if (str.compare("ADD") == 0)
		return ADD;
	if (str.compare("SEARCH") == 0)
		return SEARCH;
	return -1;
}

int main(int ac, char **av)
{
	PhoneBook	PB;
	
	while (PB.getExit() == 0) {
		std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, PB.command);
		if (check_cmd(PB.command) == -1) {
			std::cout << "Wrong command !" << std::endl;
		} else if (check_cmd(PB.command) == EXIT) {
			std::cout << "Thanks for your time, Goog bye !\n";
			PB.setExit(1);
		} else if (check_cmd(PB.command) == ADD) {
			std::cout << "ADD" << std::endl;
		} else if (check_cmd(PB.command) == SEARCH) {
			PB.displayContacts(PB.Repertoir);
			std::cout << "Please enter an index for more information: ";
			std::getline(std::cin, PB.command);
			std::cout << "You enter: " << PB.command << std::endl;
		}
	}
}
