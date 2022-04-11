/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:26:13 by dclark            #+#    #+#             */
/*   Updated: 2022/04/11 14:30:20 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"

int main(void) {
	Bureaucrat	B("Bob", 1);
	Bureaucrat	C("Clic", 150);
	ShrubberyCreationForm S("toto");
	ShrubberyCreationForm SS(S);
	ShrubberyCreationForm TT = S;

	//Tentative de signé un formulaire
	//(Le grade est tro bas ne le sera pas)
	S.beSigned(C);

	std::cout << std::endl << S << std::endl;

	//Tentative d'executer un formulaire (non signé)
	SS.execute(B);

	std::cout << std::endl << SS << std::endl;


	//Signature d'un formulaire
	TT.beSigned(B);

	std::cout << std::endl << TT << std::endl;

	ShrubberyCreationForm ST = TT;
	//Tentaive d'executer un formualire (signé)
	S.execute(C);
	S.execute(B);
	ST.execute(B);
}
