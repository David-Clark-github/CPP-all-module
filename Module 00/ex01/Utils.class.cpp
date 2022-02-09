/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:21:43 by dclark            #+#    #+#             */
/*   Updated: 2022/02/09 13:50:50 by dclark           ###   ########.fr       */
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
		std::cout << "failed in check_index 1" << std::endl;
		return false;
	}
	tmp = std::stoi(index);
	std::cout << "tmp: " << tmp << std::endl;
	if (tmp > (RepLen) || tmp < (RepLen - 9)) {
		std::cout << "failed in check_index 2" << std::endl;
		return false;
	}
	return true;
}
