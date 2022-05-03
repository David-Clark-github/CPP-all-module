/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:16:17 by dclark            #+#    #+#             */
/*   Updated: 2022/05/03 13:09:34 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#define BLINK "\e[5m"


#include <iostream>
#include <string>

class Animal {
	public:
		Animal();
		Animal(const Animal &a);
		Animal&	operator=(const Animal &a);
		virtual ~Animal();
		void			setType(const std::string type);
		std::string		getType(void)const;
		virtual void	makeSound(void)const;

	protected:
		std::string		_type;
};

#endif
