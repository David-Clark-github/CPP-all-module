/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:26:13 by dclark            #+#    #+#             */
/*   Updated: 2022/04/13 14:18:42 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.h>
#include "Form.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main(void) {
	Intern	I;
	Bureaucrat	A("Adrien", 1);
	Bureaucrat	B("Bob", 50);
	Bureaucrat	C("Charly", 150);


	A_Form*	f = I.makeForm("TOTO", "Target_toto");
	if (f != NULL) {
		f->beSigned(C);
		f->beSigned(B);
		f->beSigned(A);
		f->execute(C);
		f->execute(A);
	}
	f = I.makeForm("PresidentialPardonForm", "Dave");
	if (f != NULL) {
		f->execute(A);
		f->beSigned(C);
		f->beSigned(B);
		f->beSigned(A);
		f->execute(C);
		f->execute(B);
		f->execute(A);
	}
}
