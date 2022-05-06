/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:26:13 by dclark            #+#    #+#             */
/*   Updated: 2022/05/06 14:26:38 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.h>
#include <Bureaucrat.h>
#include <ShrubberyCreationForm.h>
#include <PresidentialPardonForm.h>
#include <RobotomyRequestForm.h>

int main(void) {
	Bureaucrat	B("Bob", 1);
	Bureaucrat	C("Clic", 150);
	ShrubberyCreationForm S("toto");
	ShrubberyCreationForm SS(S);
	ShrubberyCreationForm TT = S;
	PresidentialPardonForm	P("Escobar");
	RobotomyRequestForm		R("Dave");

	//Tentative de signé un formulaire
	S.beSigned(C);
	P.beSigned(C);
	R.beSigned(C);

	//Tentative d'executer un formulaire (non signé)
	SS.execute(B);
	P.execute(B);
	R.execute(B);

	//Signature d'un formulaire
	TT.beSigned(B);
	P.beSigned(B);
	R.beSigned(B);

	//Tentaive d'executer un formualire (signé)
	S.execute(C);
	S.execute(B);
	TT.execute(B);
	P.execute(B);
	R.execute(B);
}
