/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:14:19 by dclark            #+#    #+#             */
/*   Updated: 2022/03/29 14:16:04 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.h"
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

class A_Form {

	public:
		A_Form();
		A_Form(const std::string name, const int gradeSign, const int gradeExec);
		A_Form(const A_Form& f);
		A_Form& operator=(const A_Form& f);
		virtual ~A_Form();

		/* Grade exception */
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

		/* Functions and accessors */
		std::string		getName(void)const;
		void			setFormSigne(bool signe);
		bool			getFormSigne(void)const;
		int				getGradeSigne(void)const;
		int				getGradeExec(void)const;
		virtual void	beSigned(Bureaucrat& b) = 0;

	private:
		const	std::string	_name;
				bool		_formSigne = false;
		const	int			_gradeSigne;
		const	int			_gradeExec;

};

std::ostream &	operator<<(std::ostream & o, const A_Form & f);

#endif
