#include <iostream>
#include <stdio.h>

int main(int ac, char **av) {
	if (ac == 1)
		return 0;
	if (ac > 2)
		return 0;
	int		vali;
	float	valf;
	char	valc;
	double	vald;

	sscanf(av[1], "%d", &vali);
	sscanf(av[1], "%f", &valf);
	sscanf(av[1], "%c", &valc);
	sscanf(av[1], "%lg", &vald);
	std::cout << "int: " << vali << std::endl;
	std::cout << "float: " << valf << std::endl;
	std::cout << "char: " << valc << std::endl;
	std::cout << "double: " << vald << std::endl;
}
