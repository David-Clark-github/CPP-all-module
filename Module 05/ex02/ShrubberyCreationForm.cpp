/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:49:55 by dclark            #+#    #+#             */
/*   Updated: 2022/03/27 18:23:10 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(void)
:_name("Tree"), _gradeSigne(145), _gradeExec(137)
{
	return;
}

void	ShrubberyCreationForm::beSigned(Bureaucrat& b)
{
	try {
		if (b.getGrade() > getGradeSigne()) {
			throw GradeTooLowException();
		} else {
			setFormSigne(true);
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	b.signeForm(*this);
	return;
}

void	execute(Bureaucrat const & executor)const {
	try {
		if (getFormSigne() == false)
			throw ShrubberyCreationForm::FormNotSignedException();
		else if (getGradeExec() < exception.getGrade())
			throw ShrubberyCreationForm::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	if (getFormSigne() == true)
	{
		//do stuff here
	}
}
