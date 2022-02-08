/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:54:16 by dclark            #+#    #+#             */
/*   Updated: 2022/02/08 13:03:32 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.h"

Contact::Contact(void)
{
	this->_index = 0;
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::setTab(std::string str, int	i) {
	if (i > isec || i < ipre) {
		std::cout << "Mauvais pinteur de tab" << std::endl;
		return;
	}
	this->tab[i] = str;
}

std::string	Contact::getTab(int i)const {
	return this->tab[i];
}

void	Contact::setInd(int i) {
	this->_index = i;
}

int		Contact::getInd(void)const {
	return this->_index;
}
