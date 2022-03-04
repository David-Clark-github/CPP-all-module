/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:19 by dclark            #+#    #+#             */
/*   Updated: 2022/03/04 11:32:53 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& d);
		Dog&	operator=(const Dog& d);
		virtual ~Dog();
		virtual void	makeSound(void)const;
		void			initBrain(void);
		void			deleteBrain(void);
	private:
		Brain*	brain;
};

#endif
