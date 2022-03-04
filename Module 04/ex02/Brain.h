/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:44:43 by david             #+#    #+#             */
/*   Updated: 2022/03/03 14:35:16 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain {
	public:
		Brain();
		Brain(const Brain& b);
		Brain&	operator=(const Brain& b);
		~Brain();

		std::string	ideas[100];
};

#endif
