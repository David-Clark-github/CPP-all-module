/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:09:43 by dclark            #+#    #+#             */
/*   Updated: 2022/04/26 17:48:18 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <stdio.h>

int main(void) {
    Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a.toInt: " << a.toInt() << std::endl;
	std::cout << "b.toInt: " << b.toInt() << std::endl;
	std::cout << "c.toInt: " << c.toInt() << std::endl;
	std::cout << "d.toInt: " << d.toInt() << std::endl;
	a = Fixed(1234.4321f);
	a.setTabBit();
	a = Fixed(1234);
	a.setTabBit();
	std::cout << printf("%f", a.getFract()) << std::endl;
	return 0;
}
