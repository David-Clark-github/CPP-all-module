/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:26:13 by dclark            #+#    #+#             */
/*   Updated: 2022/04/12 15:25:47 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main(void) {
	Bureaucrat	B("Bob", 1);
	Bureaucrat	C("Clic", 150);
	ShrubberyCreationForm S("toto");
	ShrubberyCreationForm SS(S);
	ShrubberyCreationForm TT = S;
	RobotomyRequestForm	R("robot");
	PresidentialPardonForm P("Dave");

	//Tentative de signé un formulaire
	//(Le grade est trop bas)
	S.beSigned(C);
	P.beSigned(C);

	std::cout << std::endl << S << std::endl;

	//Tentative d'executer un formulaire (non signé)
	//(le grade est plus grand ou équivalent)
	SS.execute(B);

	std::cout << std::endl << SS << std::endl;


	//Signature d'un formulaire
	TT.beSigned(B);
	R.beSigned(B);
	P.beSigned(B);

	std::cout << std::endl << TT << std::endl;

	//Copie d'un formulaire deja signé
	ShrubberyCreationForm ST = TT;

	std::cout << std::endl << ST << std::endl;
	//Tentaive d'executer un formualire (signé)
	S.execute(C);
	S.execute(B);
	ST.execute(B);
	R.execute(B);
	P.execute(C);
	P.execute(B);
}
