/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:01:52 by dclark            #+#    #+#             */
/*   Updated: 2022/02/02 16:14:48 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char**)
{
	char	buff[512];
	for (int i = ac; ac > 0; ac--)
	{
		std::cin >> buff;
		std::cout << buff;
	}
	//std::cout << std::endl;
}
