/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:30:41 by dclark            #+#    #+#             */
/*   Updated: 2022/03/02 17:43:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& wa);
		WrongAnimal& operator=(const WrongAnimal& wa);
		~WrongAnimal();
		void		setType(const std::string type);
		std::string	getType(void)const;
		void	makeSound(void)const;

	protected:
		std::string	type = "WrongAnimal";
};

#endif
