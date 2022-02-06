/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:33:46 by dclark            #+#    #+#             */
/*   Updated: 2022/02/06 21:56:55 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"

int main(void)
{
	char	*str = strdup("instance");
	Sample	instance(str);
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)(void)const;

	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	free(str);
	return 0;
}
