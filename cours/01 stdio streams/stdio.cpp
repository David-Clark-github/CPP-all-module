/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:15:20 by david             #+#    #+#             */
/*   Updated: 2022/01/23 18:38:21 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int	main(void) {


	char	buffer[512];

	std::cout << "Hello world !" << std::endl;
	std::cout << "Enter something: ";
	std::cin >> buffer;
	std::cout << "You enter [" << buffer << "]" << std::endl;
}
