/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:04:29 by david             #+#    #+#             */
/*   Updated: 2022/04/18 22:57:44 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.h>

template<typename T>
void	f(T element) {
	std::cout << "[" << element << "]" << std::endl;
}

template<typename T>
void	iter(T tab[], int const size, void(*f)(T)) {
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

int main(void) {
	int	tab[5];
	tab[0] = 5;
	tab[1] = 50;
	tab[2] = 500;
	tab[3] = 5000;
	tab[4] = 50000;
	iter(tab, 5, &f);
	std::cout << std::endl;

	char	tata[8];
	tata[0] = 'a';
	tata[1] = 'z';
	tata[2] = 'e';
	tata[3] = 'r';
	tata[4] = 't';
	tata[5] = 'y';
	tata[6] = 'u';
	tata[7] = 'i';
	iter(tata, 8, &f);
	std::cout << std::endl;

	std::string haha[3];
	haha[0] = "Ca marche";
	haha[1] = "du";
	haha[2] = "tonnerre !";
	iter(haha, 3, &f);

}
