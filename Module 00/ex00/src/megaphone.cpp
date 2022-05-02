/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:01:52 by dclark            #+#    #+#             */
/*   Updated: 2022/02/07 11:34:41 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Megaphone {

public:
	
	char	c;

	Megaphone(void);
	~Megaphone(void);

	void	outLoud(char const *str);
};

Megaphone::Megaphone(void)
{
	return;
}

Megaphone::~Megaphone(void)
{
	return;
}

void	Megaphone::outLoud(char const *str)
{
	for (int i = 0; str[i]; i++) {
		if (islower(str[i])) {
			Megaphone::c = toupper(str[i]);
			std::cout << c;
		}
		else
			std::cout << str[i];
	}
}

int main(int ac, char**av)
{
	Megaphone Mega;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++) {
		Mega.outLoud(av[i]);
	}
	std::cout << std::endl;
}
