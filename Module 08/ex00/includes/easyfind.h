/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:25:52 by david             #+#    #+#             */
/*   Updated: 2022/04/24 11:46:01 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <map>
#include <list>

#define DEFEASY std::find(container.begin(),container.end(),occurence)


template<typename T>
void	easyfind(T container, int occurence) {

	try {
		if (DEFEASY != container.end())
			std::cout << *DEFEASY << std::endl;
		else
			throw std::exception();
	} catch(std::exception &e)  {
		std::cout << e.what() << std::endl;
	}
}
