/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:09:58 by dclark            #+#    #+#             */
/*   Updated: 2022/02/11 16:31:51 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.h"

int main(void)
{
	Student	*students = new Student[42];

	delete [] students;
}
