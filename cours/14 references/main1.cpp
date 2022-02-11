/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:35:56 by dclark            #+#    #+#             */
/*   Updated: 2022/02/11 16:36:22 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	int	numberOfBalls = 42;

	int	*ballsPtr = &numberOfBalls;
	int &ballsRef = numberOfBalls;

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << *ballsPtr << std::endl;
	ballsRef = 84;
	std::cout << ballsRef << std::endl;
	return 0;
}
