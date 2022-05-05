/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:14:19 by dclark            #+#    #+#             */
/*   Updated: 2022/05/05 15:55:56 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <Bureaucrat.h>
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

class Form {

	public:
		Form();
		Form(const std::string name, const int gradeSign, const int gradeExec);
		Form(const Form& f);
		Form& operator=(const Form& f);
		~Form();

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
		std::string	getName(void)const;
		bool		getFormSigne(void)const;
		void		setFormSigne(bool signe);
		int			getGradeSigne(void)const;
		int			getGradeExec(void)const;
		void		beSigned(Bureaucrat& b);

	private:
		const	std::string	_name;
		bool				_formSigne;
		const	int			_gradeSigne;
		const	int			_gradeExec;

};

std::ostream &	operator<<(std::ostream & o, const Form & f);

#endif
