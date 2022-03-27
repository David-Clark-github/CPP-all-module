/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:39:15 by dclark            #+#    #+#             */
/*   Updated: 2022/03/27 15:37:38 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "Bureaucrat.h"

int main() {
	Bureaucrat	r("Roger", 162);
	Bureaucrat	toto;
	try {
		Form	f1("form1", 100, 100);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	Form		f2("form2", 1, 1);
	Form		f3("form3", 150, 150);
	Form		f4("form4", 160, 150);

	std::cout << r << std::endl;
	std::cout << toto << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;

	r.increGrade(4);
	toto.increGrade(150);

	std::cout << r << std::endl;
	std::cout << toto << std::endl;

	f1.beSigned(toto);
	f2.beSigned(r);
	f3.beSigned(r);
}
