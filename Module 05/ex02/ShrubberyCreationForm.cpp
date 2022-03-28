/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:49:55 by dclark            #+#    #+#             */
/*   Updated: 2022/03/28 13:36:53 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:_name("Tree"), _gradeSigne(145), _gradeExec(137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s)
: _name(s.getName()), _gradeSigne(s.getGradeSigne()), _gradeExec(s.getGradeExec()), _target(s.getTarget())
{
	*this = s;
	return;
}

ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s)
{
	if (this != &s) {
		this->_name = s.getName();
		this->_gradeSigne = s.getGradeSigne();
		this->_gradeExec = s.getGradeExec();
		this->_formSigne = s.getFormSigne();
		this->_target = s.getTarget();
	}
	return *this;
}

void	ShrubberyCreationForm::beSigned(Bureaucrat& b)
{
	try {
		if (b.getGrade() > getGradeSigne()) {
			throw GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return;
	}
	setFormSigne(true);
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
		return;
	}
	if (getFormSigne() == true)
	{
		//do stuff here
	}
}

std::string	ShrubberyCreationForm::getTarget(void)const
{
	return this->_target;
}
