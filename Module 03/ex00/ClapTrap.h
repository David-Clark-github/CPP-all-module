/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:47:02 by dclark            #+#    #+#             */
/*   Updated: 2022/02/25 14:58:51 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <string>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &c);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap &c);
		void		attack(const std::string &target);
		void		takeDammage(unsigned int amount)
		void		beRepair(unsigned int amount);

	private:
		_Name;
		_Hit_points;
		_Energy_points;
		_Attack_dammage;

};

#endif
