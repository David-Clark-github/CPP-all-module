/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:53:09 by dclark            #+#    #+#             */
/*   Updated: 2022/02/11 16:00:15 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.h"

Student::Student(std::string login)
:_login(login)
{
	std::cout << "Student " << this->_login << " is born" << std::endl;
}

Student::~Student(void)
{
	std::cout << "Student " << this->_login << " died" << std::endl;
}
