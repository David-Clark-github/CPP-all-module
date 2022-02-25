/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:47:02 by dclark            #+#    #+#             */
/*   Updated: 2022/02/25 16:13:41 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <string>
#include <iostream>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &c);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap &c);
		void		attack(const std::string &target);
		void		takeDammage(unsigned int amount);
		void		beRepair(unsigned int amount);
		void		setName(std::string);
		std::string	getName(void)const;

	private:
		std::string	_Name;
		int			_Hit_points = 10;
		int			_Energy_points = 10;
		int			_Attack_dammage = 0;

};

#endif
