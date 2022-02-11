/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:07:00 by dclark            #+#    #+#             */
/*   Updated: 2022/02/11 16:31:49 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.h"

Student::Student(void)
:_login("ldefualt")
{
	std::cout << "Student " << this->_login << " is born" << std::endl;
	return;
}

Student::~Student(void)
{
	std::cout << "Student "<< this->_login << " is born" << std::endl;
	return;
}
