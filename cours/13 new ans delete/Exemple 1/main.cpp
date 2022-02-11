/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:55:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/11 15:59:09 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.h"

int main() {

	Student	bob = Student("bfubar");
	Student	*jim = new Student("jfubar");

	delete jim;
	return 0;
}
