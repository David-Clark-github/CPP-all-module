/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:36:57 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 17:12:22 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(void) {
	setName((std::string)"Bob");
	setGrade(150);
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	setName(name);
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) {
	*this = b;
	return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
	if (this != &b) {
		setName(b.getName());
		setGrade(b.getGrade());
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

void	Bureaucrat::setName(const std::string name) {
	this->_name = name;
	return;
}

std::string	Bureaucrat::getName(void)const {
	return this->_name;
}

void	Bureaucrat::setGrade(const int grade) {
	try {
		if (grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		} else if (grade < 1) {
			throw Bureaucrat::GradeTooHighException();
		}
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
		std::cout << "The grade will be set to 150" << std::endl;
		this->_grade = 150;
		return;
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
		std::cout << "The grade will be set to 1" << std::endl;
		this->_grade = 1;
		return;
	}
	this->_grade = grade;
	return;
}

int	Bureaucrat::getGrade(void)const {
	return this->_grade;
}

void	Bureaucrat::increGrade(const int val) {
	setGrade(getGrade() - val);
}

void	Bureaucrat::decreGrade(const int val) {
	setGrade(getGrade() + val);
}

std::ostream &	operator<<(std::ostream & o, const Bureaucrat & b) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return o;
}
