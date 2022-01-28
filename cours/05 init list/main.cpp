/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:17:03 by david             #+#    #+#             */
/*   Updated: 2022/01/28 18:14:38 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void) {

	Sample	instance;

	instance.foo = 42;
	std::cout << "instance.foo = " << instance.foo << std::endl;

	instance.bar();

	return 0;
}
