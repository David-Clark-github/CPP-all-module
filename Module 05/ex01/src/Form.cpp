/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:49:36 by dclark            #+#    #+#             */
/*   Updated: 2022/05/05 15:28:32 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form(void) 
: _name("default"), _gradeSigne(150), _gradeExec(150) {
	this->setFormSigne(false);
	return;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec)
:_name(name), _gradeSigne(gradeSign), _gradeExec(gradeExec)
{
	this->setFormSigne(false);
	try {
		if (gradeSign > 150 || gradeExec > 150) {
			throw Form::GradeTooLowException();
		} else if (gradeSign < 1 || gradeExec < 1) {
			throw Form::GradeTooHighException();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return;
}

Form::Form(const Form& f)
: _name(f.getName()), _gradeSigne(f.getGradeSigne()), _gradeExec(f.getGradeExec()) {
	*this = f;
	return;
}

Form& Form::operator=(const Form& f) {
	if (this != &f) {
		this->setFormSigne(f.getFormSigne());
	}
	return *this;
}

Form::~Form(void) {
	return;
}

std::string Form::getName(void)const {
	return this->_name;
}

bool	Form::getFormSigne(void)const {
	return this->_formSigne;
}

void	Form::setFormSigne(bool signe) {
	this->_formSigne = signe;
}

int		Form::getGradeSigne(void)const {
	return this->_gradeSigne;
}

int		Form::getGradeExec(void)const {
	return this->_gradeExec;
}

void	Form::beSigned(Bureaucrat& b) {
	try {
		if (b.getGrade() > getGradeSigne()) {
			throw Form::GradeTooLowException();
		} else {
			setFormSigne(1);
		}
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	b.signeForm(*this);
}

std::ostream & operator<<(std::ostream & o, const Form & f) {
	o << "name: " << f.getName() << std::endl;
	if (f.getFormSigne () == false)
		o << "Singed: No" << std::endl;
	else
		o << "Signed: Yes" << std::endl;
	o << "Grade signe: " << f.getGradeSigne() << std::endl;
	o << "Grade exec: " << f.getGradeExec() << std::endl;
	return o;
}
