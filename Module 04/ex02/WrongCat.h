/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:33:52 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 18:01:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGANIMAL_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat& wa);
		WrongCat&	operator=(const WrongCat& wa);
		~WrongCat();
		void		makeSound(void)const;
};

#endif
