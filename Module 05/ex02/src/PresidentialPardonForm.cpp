/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:49:55 by dclark            #+#    #+#             */
/*   Updated: 2022/05/06 13:25:04 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <Form.h>
#include <PresidentialPardonForm.h>
#include <fstream>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: A_Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& r)
: A_Form("PresidentialPardonForm", 25, 5), _target(r.getTarget())
{
	*this = r;
	return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& r)
{
	if (this != &r) {
		this->setFormSigne(r.getFormSigne());
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return;
}

void	PresidentialPardonForm::beSigned(Bureaucrat& b)
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

void	PresidentialPardonForm::execute(Bureaucrat const & executor)const {
	try {
		if (getFormSigne() == false)
			throw PresidentialPardonForm::FormNotSignedException();
		else if (getGradeExec() < executor.getGrade())
			throw PresidentialPardonForm::GradeTooLowException();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return;
	}
	if (getFormSigne() == true)
		std::cout << getTarget() << " a été pardonnée par Zaphod Beeblebrox" << std::endl;
	return;
}

void	PresidentialPardonForm::setTarget(const std::string target) {
	this->_target = target;
	return;
}

std::string	PresidentialPardonForm::getTarget(void)const {
	return this->_target;
}

std::ostream & operator<<(std::ostream& o, const PresidentialPardonForm& r) {
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
