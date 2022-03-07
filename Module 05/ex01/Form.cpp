/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:49:36 by dclark            #+#    #+#             */
/*   Updated: 2022/03/07 12:49:55 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form(void) : _name("default"), _gradeSigne(150), _gradeExec(150) {
	return;
}

Form::Form(std::string name) : _name(name), _gradeSigne(150), _gradeExec(150) {
	return;
}

Form::Form(std::string name, int signeForm) : _name(name), _gradeSigne(signeForm), _gradeExec(signeForm) {
	return;
}

Form::Form(const Form& f) : _name(f.getName()), _formSigne(f.getFormSigne()), _gradeSigne(f.getGradeSigne()), _gradeExec(f.getGradeExec()) {
	*this = f;
	return;
}

Form& Form::operator=(const Form& f) {
	return *this;
}

Form::~Form(void) {
	return;
}

std::string Form::getName(void)const {
	return this->_name;
}

void	Form::setFormSigne(bool signe) {
	this->_formSigne = signe;
}

bool	Form::getFormSigne(void)const {
	return this->_formSigne;
}

int	Form::getGradeSigne(void)const {
	return this->_gradeSigne;
}

int	Form::getGradeExec(void)const {
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