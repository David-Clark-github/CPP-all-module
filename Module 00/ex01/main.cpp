/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:08:24 by dclark            #+#    #+#             */
/*   Updated: 2022/03/23 11:19:27 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"
#include "PhoneBook.class.h"
#include "Utils.class.h"

int main(int ac, char **av)
{
	PhoneBook	PB;
	Utils		Utils;
	
	while (PB.getExit() == 0) {
		std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, PB.command);
		if (Utils.check_cmd(PB.command) == -1) {
			/*Ignore if the cmd do not match*/;
		} else if (Utils.check_cmd(PB.command) == EXIT) {
			std::cout << "Thanks for your time, Goog bye !\n";
			PB.setExit(1);
		} else if (Utils.check_cmd(PB.command) == ADD) {
			PB.setRepLen(PB.getRepLen() + 1);
			PB.addContact(PB.Repertoir, PB.getRepLen());
		} else if (Utils.check_cmd(PB.command) == SEARCH) {
			PB.displayContacts(PB.Repertoir);
			if (PB.getRepLen() != 0) {
				std::cout << "Please enter an index for more information: ";
				std::getline(std::cin, PB.command);
				while (Utils.check_index(PB.command, PB.getRepLen()) == false) {
					std::cout << "Please enter a valid index: ";
					std::getline(std::cin, PB.command);
				}
				PB.displayContact(PB.Repertoir[(std::stoi(PB.command) - 1) % 8]);
			}
		}
	}
}
