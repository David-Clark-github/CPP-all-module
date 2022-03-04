/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:36:57 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 18:08:06 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(void) {
	setName("Null");
	setGrade(150);
	return;
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
	// -- le grade de x a 1
	// attention de ne pas mettre le grade en dessous de 1
}

void	Bureaucrat::decreGrade(const int val) {
	//++ le grade de x a 150
	// attention de ne pas mettre le grade au dela de 150
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b) {
	o << b.getName() << ", bureaucrat grade " << n.getGrade();
	return;
}
