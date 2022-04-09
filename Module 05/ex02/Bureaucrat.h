/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:37:08 by dclark            #+#    #+#             */
/*   Updated: 2022/04/09 14:30:13 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "Form.h"
#include <string>
#include <iostream>
#include <stdexcept>

class A_Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& b);
		Bureaucrat& operator=(const Bureaucrat& b);
		~Bureaucrat();
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The Grade is too low");
				}
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The Grade is too high");
				}
		};
		void		setName(const std::string);
		std::string	getName(void)const;
		void		setGrade(const int grade);
		int			getGrade(void)const;
		void		increGrade(const int val);
		void		decreGrade(const int val);
		void		signeForm(A_Form& f);

	private:
		std::string	_name;
		int			_grade;
};

std::ostream &	operator<<(std::ostream & o, const Bureaucrat & b);

#endif
