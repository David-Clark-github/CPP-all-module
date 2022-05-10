/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:25:52 by david             #+#    #+#             */
/*   Updated: 2022/05/10 17:22:20 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

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

#endif
