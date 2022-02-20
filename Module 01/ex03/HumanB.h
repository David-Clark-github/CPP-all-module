/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:29:17 by dclark            #+#    #+#             */
/*   Updated: 2022/02/18 14:29:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include "Weapon.h"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void        attack(void);
        void        setName(std::string name);
        std::string getName(void)const;
        void        setWeapon(Weapon& type);
        std::string getWeapon(void)const;
    private:
        std::string _name;
        Weapon      *_weapon;
};

#endif
