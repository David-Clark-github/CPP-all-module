/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:05:22 by dclark            #+#    #+#             */
/*   Updated: 2022/02/11 16:31:50 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H

#include <iostream>
#include <string>

class Student {

public:
	Student(void);
	~Student(void);

private:
	std::string _login;
};

#endif
