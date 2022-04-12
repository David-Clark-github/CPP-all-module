/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:24:20 by dclark            #+#    #+#             */
/*   Updated: 2022/04/12 18:10:26 by dclark           ###   ########.fr       */
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
	PresidentialPardonForm *P = new PresidentialPardonForm(target);
	return P;
}
