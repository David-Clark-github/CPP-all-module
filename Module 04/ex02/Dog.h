/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:19 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 16:38:04 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public A_Animal {
	public:
		Dog();
		Dog(const Dog& d);
		Dog&	operator=(const Dog& d);
		virtual ~Dog();
		void	makeSound(void)const;
		void	initBrain(void);
		void	deleteBrain(void);
	private:
		Brain*	brain;
};

#endif
