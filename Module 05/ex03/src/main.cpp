/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:26:13 by dclark            #+#    #+#             */
/*   Updated: 2022/04/12 19:01:56 by dclark           ###   ########.fr       */
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
	Bureaucrat	B("Bob", 1);


	A_Form*	f = I.makeForm("TOTO", "Target_toto");
	f->beSigned(B);
	f->execute(B);
}
