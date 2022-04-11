/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:49:55 by dclark            #+#    #+#             */
/*   Updated: 2022/04/11 17:50:56 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.h"
#include "RobotomyRequestForm.h"
#include <fstream>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: A_Form("RobotomyRequestForm", 72, 45), _target(target)
{
	srand (time(NULL));
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& r)
: A_Form("RobotomyRequestForm", r.getGradeSigne(), r.getGradeExec()), _target(r.getTarget())
{
	srand (time(NULL));
	*this = r;
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r)
{
	if (this != &r) {
		this->setTarget(r.getTarget());
		this->setFormSigne(r.getFormSigne());
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return;
}

void	RobotomyRequestForm::beSigned(Bureaucrat& b)
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

void	RobotomyRequestForm::execute(Bureaucrat const & executor)const {
	try {
		if (getFormSigne() == false)
			throw RobotomyRequestForm::FormNotSignedException();
		else if (getGradeExec() < executor.getGrade())
			throw RobotomyRequestForm::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return;
	}
	if (getFormSigne() == true)
	{
		int	res = rand();
		std::cout << "*Bruits de perceuse*" << std::endl;
		if (res < (RAND_MAX / 2))
			std::cout << getTarget() << " a été robotomisé avec succes !" << std::endl;
		else
			std::cout << "L'opération de robotomisé " << getTarget() << " a échoué :/" << std::endl;
	}
	return;
}

void	RobotomyRequestForm::setTarget(const std::string target) {
	this->_target = target;
	return;
}

std::string	RobotomyRequestForm::getTarget(void)const {
	return this->_target;
}

std::ostream & operator<<(std::ostream& o, const RobotomyRequestForm& r) {
	o << "name: [" << r.getName() << "]" << std::endl;
	if (r.getFormSigne() == false)
		o << "Signed: No" << std::endl;
	else
		o << "Signed: Yes" << std::endl;
	o << "Grade signe: " << r.getGradeSigne() << std::endl;
	o << "Grade exec: " << r.getGradeExec() << std::endl;
	o << "Target: [" << r.getTarget() << "]" << std::endl;
	return o;
}
