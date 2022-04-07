/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type_reinterpretation.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:47:56 by david             #+#    #+#             */
/*   Updated: 2022/04/05 12:12:22 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//int * e = d; ne fonctionne pas a la compilation :'(

int main(void) {
	float	a	=	420.042f;		//Reference Value

	void *	b	=	&a;				//Implicit reinterpretation cast
	void *	c	=	(void *) &a;	//Explicit reinterpretation cast

	void *	d	=	&a;				//Implicit Promotion	-> OK
	//int *	e	=	d;				//Implicit demotion		-> Hazardeous !
	int	*	f	=	(int *) d;		//Explicit demotion		-> OK, I obey

	printf("%p, %f\n", &a, a);

	printf("%p\n", b);
	printf("%p\n", c);

	printf("%p\n", d);
	//printf("%p, %d\n", e, *e);
	printf("%p, %d\n", f, *f);
	return 0;
};
