/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:16:17 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 11:49:57 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

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
		virtual void	makeSound(void)const = 0;

	protected:
		std::string		type;
};

#endif
