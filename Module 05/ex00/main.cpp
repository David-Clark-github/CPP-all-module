/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:39:15 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 17:23:15 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main() {
	Bureaucrat	r("Roger", 162);
	Bureaucrat	abc("abc", 0);
	Bureaucrat	toto;

	std::cout << std::endl;

	std::cout << r << std::endl;
	std::cout << abc << std::endl;
	std::cout << toto << std::endl;

	std::cout << std::endl;

	r.increGrade(4);
	abc.decreGrade(15);
	toto.increGrade(150);

	std::cout << std::endl;

	std::cout << r << std::endl;
	std::cout << abc << std::endl;
	std::cout << toto << std::endl;
}
