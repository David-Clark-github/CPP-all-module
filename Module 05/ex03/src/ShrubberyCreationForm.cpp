/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:49:55 by dclark            #+#    #+#             */
/*   Updated: 2022/04/11 16:04:07 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: A_Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	//std::cout << "Shru form created" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s)
: A_Form("ShrubberyCreationForm", s.getGradeSigne(), s.getGradeExec()), _target(s.getTarget())
{
	*this = s;
	return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s)
{
	if (this != &s) {
		this->setTarget(s.getTarget());
		this->setFormSigne(s.getFormSigne());
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return;
}

void	ShrubberyCreationForm::beSigned(Bureaucrat& b)
{
	try {
		if (b.getGrade() > getGradeSigne()) {
			throw GradeTooLowException();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return;
	}
	setFormSigne(true);
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
		std::ofstream ofs(getTarget() + (std::string)"_shrubbery");
		ofs << "    /\\    /\\"    << std::endl;
		ofs << " /\\/||\\  /||\\  /\\" << std::endl;
		ofs << "/||\\||\\ /\\||\\ /||\\" << std::endl;
		ofs << "/||\\||\\/||\\|\\ /||\\" << std::endl;
		ofs << "/||\\||\\/||\\|\\ /||\\" << std::endl;
		ofs.close();
		std::cout << getTarget() << " created" << std::endl;
	}
	return;
}

void	ShrubberyCreationForm::setTarget(const std::string target) {
	this->_target = target;
	return;
}

std::string	ShrubberyCreationForm::getTarget(void)const {
	return this->_target;
}

std::ostream & operator<<(std::ostream& o, const ShrubberyCreationForm& s) {
	o << "name: [" << s.getName() << "]" << std::endl;
	if (s.getFormSigne() == false)
		o << "Signed: No" << std::endl;
	else
		o << "Signed: Yes" << std::endl;
	o << "Grade signe: " << s.getGradeSigne() << std::endl;
	o << "Grade exec: " << s.getGradeExec() << std::endl;
	o << "Target: [" << s.getTarget() << "]" << std::endl;
	return o;
}
