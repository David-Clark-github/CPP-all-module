/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:49:55 by dclark            #+#    #+#             */
/*   Updated: 2022/04/09 15:06:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
: A_Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Shru form created" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s)
{
	*this = s;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "Shru form destructor called" << std::endl;
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
		return;
	}
	b.signeForm(*this);
	return;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)const {
	try {
		if (getFormSigne() == false)
			throw ShrubberyCreationForm::FormNotSignedException();
		else if (getGradeExec() < executor.getGrade())
			throw ShrubberyCreationForm::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return;
	}
	if (getFormSigne() == true)
	{
		std::ofstream ofs("<target>_shrubbery");
		ofs << " /\\" << std::endl;
		ofs << "/||\\" << std::endl;
		ofs << "/||\\" << std::endl;
		ofs << "/||\\" << std::endl;
		ofs.close();
		std::cout << "target created" << std::endl;
	}
	return;
}
