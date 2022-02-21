/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:08:56 by dclark            #+#    #+#             */
/*   Updated: 2022/02/21 13:08:57 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.h"
#include <iostream>
#include <string>

Karen::Karen(void)
{
    return;
}

Karen::~Karen(void)
{
    return;
}

void    Karen::complain(std::string level) {
    Karen   K;
    void    (Karen::*f)(void);
    switch (std::stoi(level))
    {
       case 1:
           f = &Karen::_debug;
           (K.*f)();
           break;

       case 2:
           f = &Karen::_info;
           (K.*f)();
           break;

       case 3:
           f = &Karen::_warning;
           (K.*f)();
           break;

       case 4:
           f = &Karen::_error;
           (K.*f)();
           break;

       default:
           std::cout << "Karen has nothin to say ;)" << std::endl;
           break;
    }
    return;
}

void    Karen::_debug(void) {
    std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. \
I really do !" << std::endl;
    return;
}

void    Karen::_info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger ! \
If you did, I wouldn’t be asking for more !" << std::endl;
    return;
}

void    Karen::_warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started \
working here since last month." << std::endl;
    return;
}

void    Karen::_error(void) {
    std::cout << "This is unacceptable ! \
I want to speak to the manager now." << std::endl;
    return;
}