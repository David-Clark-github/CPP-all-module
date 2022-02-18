/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:51:34 by dclark            #+#    #+#             */
/*   Updated: 2022/02/15 14:51:35 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie  *zombieHorde(int N, std::string name) {
    if (N <= 0) {
        std::cout << "Veuillez mettre un chiffre positif non null dans le premier argument" << std::endl;
        return NULL;
    }
    Zombie  *Ztab = new Zombie[N];
    return (Ztab);
}