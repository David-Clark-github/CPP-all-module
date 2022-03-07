/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:14:19 by dclark            #+#    #+#             */
/*   Updated: 2022/03/07 12:48:44 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.h"
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

class Form {

	public:
		Form();
		Form(std::string name);
		Form(std::string name, int signeForm);
		Form(const Form& f);
		Form& operator=(const Form& f);
		~Form();
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The Grade is too low");
				}
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The Grade is too low");
				}
		};
		std::string	getName(void)const;
		void		setFormSigne(bool signe);
		bool		getFormSigne(void)const;
		int			getGradeSigne(void)const;
		int			getGradeExec(void)const;
		void		beSigned(Bureaucrat& b);

	private:
		const	std::string	_name;
				bool		_formSigne = 0;
		const	int			_gradeSigne;
		const	int			_gradeExec;

};

#endif
