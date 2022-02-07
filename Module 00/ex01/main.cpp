/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:08:24 by dclark            #+#    #+#             */
/*   Updated: 2022/02/07 15:06:30 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"
#include "PhoneBook.class.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

int		check_cmd(char *str) {
	int	res;
	if (!str)
		return -1;
	if (strcmp(str, "EXIT") == 0)
		return 1;
	if (strcmp(str, "ADD") == 0)
		return 2;
	if (strcmp(str, "SEARCH") == 0)
		return 3;
	return -1;
}

int main(int ac, char **av)
{
	PhoneBook	PB;
	
	std::string test;

	while (PB.getExit() == 0) {
		std::cout << "Please enter a command: ADD, SEARCH or EXIT: ";
		std::getline (std::cin, PB.command);
		if (check_cmd(PB.command) == -1 || strlen(PB.command) == 0) {
			std::cout << "Wrong command !" << std::endl;
		} else if (check_cmd(PB.command) == 1) {
			std::cout << "Thanks for your time, Goog bye !\n";
			PB.setExit(1);
		} else if (check_cmd(PB.command) == 2) {
			std::cout << "ADD" << std::endl;
		} else if (check_cmd(PB.command) == 3) {
			std::cout << "SEARCH" << std::endl;
		}
	}
}
