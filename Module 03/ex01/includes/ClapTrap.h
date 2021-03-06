/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:47:02 by dclark            #+#    #+#             */
/*   Updated: 2022/03/24 13:25:47 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <string>
#include <iostream>

#define H_P 100
#define E_P 50
#define A_D 20

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &c);
		~ClapTrap(void);
		ClapTrap		&operator=(const ClapTrap &c);
		void			attack(const std::string &target);
		void			takeDammage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			setName(std::string name);
		std::string		getName(void)const;
		void			setHitPoints(int amount);
		int				getHitPoints(void)const;
		void			setEnergy(int amount);
		int				getEnergy(void)const;
		void			setAttackD(unsigned int amout);
		unsigned int			getAttackD(void)const;

	private:
		std::string		_Name;
		int				_Hit_points;
		int				_Energy_points;
		unsigned int	_Attack_dammage;
};

#endif
