/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:08:56 by dclark            #+#    #+#             */
/*   Updated: 2022/03/23 15:18:51 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include <iostream>
#include <string>

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void    Harl::complain(std::string level) {
    Harl   H;
    void    (Harl::*f)(void);
	std::cout << "std::stoi() = " << std::stoi(level) << std::endl;
    switch (std::stoi(level))
    {
       case 0:
           f = &Harl::_debug;
           (H.*f)();
           break;

       case 1:
           f = &Harl::_info;
           (H.*f)();
           break;

       case 2:
           f = &Harl::_warning;
           (H.*f)();
           break;

       case 3:
           f = &Harl::_error;
           (H.*f)();
           break;

       default:
           std::cout << "Harl has nothin' to say ;)" << std::endl;
           break;
    }
    return;
}

void    Harl::_debug(void) {
    std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. \
I really do !" << std::endl;
    return;
}

void    Harl::_info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger ! \
If you did, I wouldn’t be asking for more !" << std::endl;
    return;
}

void    Harl::_warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started \
working here since last month." << std::endl;
    return;
}

void    Harl::_error(void) {
    std::cout << "This is unacceptable ! \
I want to speak to the manager now." << std::endl;
    return;
}
