/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:39:38 by dclark            #+#    #+#             */
/*   Updated: 2022/02/15 13:50:10 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void)const;
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif
