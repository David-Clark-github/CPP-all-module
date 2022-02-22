/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:38:08 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 13:38:10 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"
#include <iostream>

Sample::Sample(void) {
    std::cout << "Constructeur Sample called" << std::endl;
    return;
}

Sample::~Sample(void) {
    std::cout << "Desctructeur Sample called" << std::endl;
}

void    Sample::bar(char const c)const {
    std::cout << "Fonction membre called avec une surcharge de char: " << c << std::endl;
    return;
}

void    Sample::bar(int const i)const {
    std::cout << "Fonction membre called avec une surcharge de int: " << i << std::endl;
    return;
}

void    Sample::bar(float const f)const {
    std::cout << "Fonction membre called avec une surcharge de char: " << f << std::endl;
    return;
}

void    Sample::bar(Sample const &S)const {
    std::cout << "Fonction membre called avec une surcharge de class Sample" << std::endl;
    return;
}
