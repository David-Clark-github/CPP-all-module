/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:09:43 by dclark            #+#    #+#             */
/*   Updated: 2022/05/02 17:27:49 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main(void) {
	Fixed			a;
	Fixed	const	b(10);
	Fixed	const	c(42.42f);
	Fixed	const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is [" << a << "]" << std::endl;
	std::cout << "b is [" << b << "]" << std::endl;
	std::cout << "c is [" << c << "]" << std::endl;
	std::cout << "d is [" << d << "]" << std::endl;

	std::cout << "a is [" << a.toInt() << "]" << " as integer" << std::endl;
	std::cout << "b is [" << b.toInt() << "]" << " as integer" << std::endl;
	std::cout << "c is [" << c.toInt() << "]" << " as integer" << std::endl;
	std::cout << "d is [" << d.toInt() << "]" << " as integer" << std::endl;

}
