/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:28:38 by dclark            #+#    #+#             */
/*   Updated: 2022/02/18 13:28:39 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main () {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "L’adresse de la string en mémoire :" << &str << std::endl;
    std::cout << "L’adresse stockée dans stringPTR  :" << stringPTR << std::endl;
    std::cout << "L’adresse stockée dans stringREF  :" << &stringREF << std::endl;
    std::cout << "La valeur de la string            :" << str << std::endl;
    std::cout << "La valeur pointée par stringPTR   :" << *stringPTR << std::endl;
    std::cout << "La valeur pointée par stringREF   :" << stringREF << std::endl;
}