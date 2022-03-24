/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:16:17 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 16:36:16 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class A_Animal {
	public:
		A_Animal();
		A_Animal(const A_Animal &a);
		A_Animal&	operator=(const A_Animal &a);
		virtual ~A_Animal();
		void			setType(const std::string type);
		std::string		getType(void)const;
		virtual void	makeSound(void)const = 0;

	protected:
		std::string		type;
};

#endif
