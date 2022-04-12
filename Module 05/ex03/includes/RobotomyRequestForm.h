/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:37:02 by dclark            #+#    #+#             */
/*   Updated: 2022/04/12 18:54:34 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.h"
#include "Bureaucrat.h"
#include <iostream>
#include <string>
#include <stdexcept>

class RobotomyRequestForm : public A_Form {

	public:
		/* Canonique class */
		RobotomyRequestForm(std::string target);										
		RobotomyRequestForm(const RobotomyRequestForm& r);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& r);
		virtual ~RobotomyRequestForm();

		/* Form signed exception */
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The form isn't signed");
				}
		};

		/* public func */
		virtual void	beSigned(Bureaucrat& b);
		virtual void	execute(Bureaucrat const & executor)const;
		void			setTarget(const std::string target);
		std::string		getTarget(void)const;

	private:
		std::string _target;
};

std::ostream& operator<<(std::ostream& o, const RobotomyRequestForm& r);

#endif
