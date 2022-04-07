#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int		a	=	42;				//Reference Value

	double	b	=	a;				//Implicit conversion cast
	double	c	=	(double) a;		//Explicit conversion cast

	double	d	=	a;				//Implicit Promotion --> OK
	int		e	=	d;				//Implicit Demotion  --> Harzardous !
	int		f	=	(int) d;		//Explicit demotion  --> OK, you'r in charge !
}
