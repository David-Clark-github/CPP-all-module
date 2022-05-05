/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:49:36 by dclark            #+#    #+#             */
/*   Updated: 2022/05/05 17:41:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

A_Form::A_Form(void) : _name("default"), _gradeSigne(150), _gradeExec(150) {
	this->setFormSigne(false);
	return;
}

A_Form::A_Form(const std::string name, const int gradeSign, const int gradeExec)
:_name(name), _gradeSigne(gradeSign), _gradeExec(gradeSign)
{
	this->setFormSigne(false);
	try {
		if (gradeSign > 150 || gradeExec > 150) {
			throw A_Form::GradeTooLowException();
		} else if (gradeSign < 1 || gradeExec < 1) {
			throw A_Form::GradeTooHighException();
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return;
}

A_Form::A_Form(const A_Form& f) 
: _name(f.getName()), _gradeSigne(f.getGradeSigne()), _gradeExec(f.getGradeExec()) {
	*this = f;
	return;
}

A_Form& A_Form::operator=(const A_Form& f) {
	if (this != &f) {
		this->setFormSigne(f.getFormSigne());
	}
	return *this;
}

A_Form::~A_Form(void) {
	return;
}

std::string A_Form::getName(void)const {
	return this->_name;
}

void	A_Form::setFormSigne(bool signe) {
	this->_formSigne = signe;
}

bool	A_Form::getFormSigne(void)const {
	return this->_formSigne;
}

int	A_Form::getGradeSigne(void)const {
	return this->_gradeSigne;
}

int	A_Form::getGradeExec(void)const {
	return this->_gradeExec;
}

/*
void	A_Form::beSigned(Bureaucrat& b) {
	try {
		if (b.getGrade() > getGradeSigne()) {
			throw A_Form::GradeTooLowException();
		} else {
			setFormSigne(1);
		}
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	b.signeForm(*this);
}
*/

std::ostream & operator<<(std::ostream & o, const A_Form & f) {
	o << "name: " << f.getName() << std::endl;
	if (f.getFormSigne () == false)
		o << "Singed: No" << std::endl;
	else
		o << "Signed: Yes" << std::endl;
	o << "Grade signe: " << f.getGradeSigne() << std::endl;
	o << "Grade exec: " << f.getGradeExec() << std::endl;
	return o;
}
