/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:24:20 by dclark            #+#    #+#             */
/*   Updated: 2022/04/13 14:01:49 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"
#include "Form.h"
#include "PresidentialPardonForm.h"

Intern::Intern(void) {
	return;
}

Intern::Intern(const Intern& i) {
	*this = i;
	return;
}

Intern&	Intern::operator=(const Intern& i) {
	return *this;
}

Intern::~Intern(void) {
	return;
}

A_Form*	Intern::makeForm(std::string form_name, std::string target) {
	std::string	tabFormName[3];
	int			index = -1;
	tabFormName[0] = "ShrubberyCreationForm";
	tabFormName[1] = "RobotomyRequestForm";
	tabFormName[2] = "PresidentialPardonForm";

	for (int i = 0; i < 3; i++) {
		if (form_name.compare(tabFormName[i]) == 0) {
			index = i;
		}
	}

	switch (index) {
		case 0:
			return (new ShrubberyCreationForm(target));
			break;
		case 1:
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			return (new PresidentialPardonForm(target));
			break;
		default:
			std::cout << "Le nom du formulaire n'exsite pas" << std::endl;
			return (NULL);
			break;
	}
}
