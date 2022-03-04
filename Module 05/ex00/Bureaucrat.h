/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:37:08 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 18:43:41 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& b);
		Bureaucrat& operator=(const Bureaucrat& b);
		~Bureaucrat();
		void		setName(const std::string);
		std::string	getName(void)const;
		void		setGrade(const int grade);
		int			getGrade(void)const;
		void		increGrade(const int val);
		void		decreGrade(const int val);

	private:
		std::string	_name;
		int			_grade;
}

std::ostream& operator<<(std::ostream, const Bureaucrat& b);

#endif
