/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:25:52 by david             #+#    #+#             */
/*   Updated: 2022/04/23 22:55:33 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <map>
#include <list>

template<typename T>
void	easyfind(T container, int occurence) {
	try {
		if (std::find(container.begin(), container.end(), occurence) != container.end())
			std::cout << std::find(container.begin(), container.end(), occurence) << std::endl;
		else
			throw std::exception();
	}
	return;
}
