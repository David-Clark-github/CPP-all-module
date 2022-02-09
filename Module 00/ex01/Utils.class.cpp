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
