/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:20:19 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 16:05:43 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.h"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& c);
		Cat&	operator=(const Cat& c);
		virtual ~Cat();
		virtual void	makeSound(void)const;
};

#endif
