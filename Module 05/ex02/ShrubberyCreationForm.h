/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:37:02 by dclark            #+#    #+#             */
/*   Updated: 2022/04/09 14:36:03 by dclark           ###   ########.fr       */
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
		ShrubberyCreationForm();												//O ! Init des val avec le const de A_Form...
		ShrubberyCreationForm(const ShrubberyCreationForm& s);					//O !
		//ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);		//X !
		virtual ~ShrubberyCreationForm();										//X !

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
