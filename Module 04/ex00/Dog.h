/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:19 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 16:49:28 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.h"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& d);
		Dog&	operator=(const Dog& d);
		~Dog();
		virtual void	makeSound(void)const;
};

#endif
