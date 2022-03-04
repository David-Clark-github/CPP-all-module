/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:36:57 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 18:41:47 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(void) {
	setName("Null");
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
	this->_grade = grade;
	return;
}

int	Bureaucrat::getGrade(void)const {
	return this->_grade;
}

void	Bureaucrat::increGrade(const int val) {
	try {
		if ((getGrade() - val) < 1) {
			throw std::exception();
		} else {
			setGrade(getGrade() - val);
		}
	} catch (std::exception e) {
		std::cout << "Le grade du Bureaucrat ne peut être supertieur a 1" << std::endl;
	}
}

void	Bureaucrat::decreGrade(const int val) {
	try {
		if ((getGrade() + val) >150) {
			throw std::exception();
		} else {
			setGrade(getGrade() + val);
		}
	} catch (std::exception e) {
		std::cout << "Le grade du Bureaucrat ne peut être inferieur a 150" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
	o << b.getName() << ", bureaucrat grade " << n.getGrade();
	return;
}
