/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:06:17 by dclark            #+#    #+#             */
/*   Updated: 2022/02/22 14:06:20 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.h"
#include <iostream>

int  main (void) {
    Integer x(30);
    Integer y(10);
    Integer z(0);

    std::cout << "Value of x : " << x << std::endl;
    
    std::cout << "Value of y : " << y << std::endl;
    y = Integer(12);
    std::cout << "Value of y : " << y << std::endl;

    std::cout << "Value of z : " << z << std::endl;
    z = x + y;
    std::cout << "Value of z : " << z << std::endl;
    return 0;
}