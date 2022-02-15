/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:39:38 by dclark            #+#    #+#             */
/*   Updated: 2022/02/15 12:43:49 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
	private:
		std::string	_name;
}

#endif
