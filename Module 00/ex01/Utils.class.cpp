/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:21:43 by dclark            #+#    #+#             */
/*   Updated: 2022/03/22 18:48:34 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.class.h"

Utils::Utils(void)
{
	return;
}

Utils::~Utils(void)
{
	return;
}

int	Utils::check_cmd(std::string str)const {
	if (str.compare("EXIT") == 0)
		return EXIT;
	else if (str.compare("ADD") == 0)
		return ADD;
	else if (str.compare("SEARCH") == 0)
		return SEARCH;
	return -1;
}

int	Utils::check_tel(std::string tel)const {
	for (int i = 0; tel[i]; i++) {
		if (isdigit(tel[i]) == 0)
			return (0);
	}
	return 1;
}

bool	Utils::check_index(std::string index, int RepLen) {
	int tmp;
	if (Utils::check_tel(index) == false) {
		return true;
	}
	if (index.std::lengths() > 8)
	{
		std::cout << "The index is incorect, please enter a correct index" << std::endl;
		while (index.std::length() > 8)
	}
	tmp = std::stoi(index);
	if (tmp < 1)
		return true;
	if (tmp > (RepLen) || tmp < (RepLen - 7)) {
		return true;
	}
	return false;
}

bool	Utils::strIsAlpha(const std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (std::isalpha(str[i]) == false)
			return false;
	}
	return true;
}
