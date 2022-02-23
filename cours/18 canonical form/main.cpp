/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:48:31 by dclark            #+#    #+#             */
/*   Updated: 2022/02/23 13:04:03 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"
#include <iostream>

int main() {
    Sample instance1;
    Sample instance2(42);
    Sample instance3(instance1);

	std::cout << "i1: " << instance1 << std::endl;
	std::cout << "i2: " << instance2 << std::endl;
	std::cout << "i3: " << instance3 << std::endl;

	instance3 = instance2;
	std::cout << "i3: " << instance3 << std::endl;

	return 0;
}
