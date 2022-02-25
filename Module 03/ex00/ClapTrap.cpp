/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:53:53 by dclark            #+#    #+#             */
/*   Updated: 2022/02/25 14:58:49 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void):_Name("default"), _Hit_points(10), _Energy_points(10), _Attack_dammage(0) {
	std::cout << "Default Constructor called" << std::endl;
	return;
}
