/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertoir.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:08:24 by dclark            #+#    #+#             */
/*   Updated: 2022/02/07 12:22:40 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"

int main(int ac, char **av)
{
	if (ac < 3) {
		std::cout << "2 arguments minimum" << std::endl;
		return 0;
	}
	Contact cont1;

	cont1.setPre(av[1]);
	cont1.setNom(av[2]);
	std::cout << "Prénom: " << cont1.getPre() << std::endl;
	std::cout << "Nom: " << cont1.getNom() << std::endl;
}
