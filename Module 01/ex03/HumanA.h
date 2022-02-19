/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:28:42 by dclark            #+#    #+#             */
/*   Updated: 2022/02/19 21:38:28 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.h"
#include <string>

class HumanA {
	public:
		HumanA(std::string name, Weapon& type);
		~HumanA(void);
		void		attack(void);
		void		setName(std::string name);
		std::string	getName(void)const;
		void		setType(Weapon& type);
		std::string	getType(void)const;

	private:
		std::string _name;
		Weapon		*_type;
};

#endif
