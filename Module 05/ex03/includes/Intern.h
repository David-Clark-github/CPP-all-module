/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:24:44 by dclark            #+#    #+#             */
/*   Updated: 2022/04/12 18:10:23 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.h>
#include <Form.h>
#include <PresidentialPardonForm.h>
#include <RobotomyRequestForm.h>
#include <ShrubberyCreationForm.h>
#include <string>
#include <iostream>

class Intern {

	public:
		Intern();
		Intern(const Intern& i);
		Intern& operator=(const Intern& i);
		~Intern();

		A_Form*	makeForm(std::string form_name, std::string target);
};
