/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:26:13 by dclark            #+#    #+#             */
/*   Updated: 2022/04/10 16:12:06 by dclark           ###   ########.fr       */
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
	S.beSigned(C);

	//Tentative d'executer un formulaire (non signé)
	SS.execute(B);

	//Signature d'un formulaire
	TT.beSigned(B);

	//Tentaive d'executer un formualire (signé)
	S.execute(C);
	S.execute(B);
	TT.execute(B);
}
