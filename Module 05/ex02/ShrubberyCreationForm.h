/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:37:02 by dclark            #+#    #+#             */
/*   Updated: 2022/03/27 18:23:11 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.h"
#include "Bureaucrat.h"
#include <iostream>
#include <string>
#include <stdexcept>

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& s);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);
		virtual ~ShrubberyCreationForm();

		/* Form signed exception */
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The form isn't signed")
				}
		};

		void	beSigned(Bureaucrat& b);
		void	execute(Bureaucrat const & executor)const;
};

#endif
