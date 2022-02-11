/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:47:08 by dclark            #+#    #+#             */
/*   Updated: 2022/02/11 15:59:56 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_H
# define STUDENT_CLASS_H

#include <iostream>
#include <string>

class Student {

public:
	Student(std::string login);
	~Student(void);

private:
	std::string _login;
};

#endif
