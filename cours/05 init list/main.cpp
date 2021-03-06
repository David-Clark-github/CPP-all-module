/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:17:03 by david             #+#    #+#             */
/*   Updated: 2022/01/30 15:43:44 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.h"
#include "Sample2.class.h"
#include "Sample3.class.h"

int main(void) {

	Sample1	instance1('a', 42, 23.5f);
	Sample2	instance2('z', 24, 41.5f);
	Sample3 instance3('d', 26, 7.0f);

	return 0;
}
