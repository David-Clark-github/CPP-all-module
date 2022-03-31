/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:37:02 by dclark            #+#    #+#             */
/*   Updated: 2022/03/29 14:56:58 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.h"
#include "Bureaucrat.h"
#include <iostream>
#include <string>
#include <stdexcept>

class ShrubberyCreationForm : public A_Form {

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& s);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);
		virtual ~ShrubberyCreationForm();

		/* Form signed exception */
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The form isn't signed");
				}
		};

		virtual void	beSigned(Bureaucrat& b);
		void			execute(Bureaucrat const & executor)const;
		std::string	getTarget(void)const;
	private:
		std::string _target;
};

#endif
