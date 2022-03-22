/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:39:38 by dclark            #+#    #+#             */
/*   Updated: 2022/03/18 13:27:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void)const;
		void		setName(const std::string name);
		std::string	getName(void)const;
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
