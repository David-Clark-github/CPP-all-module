/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:24:57 by dclark            #+#    #+#             */
/*   Updated: 2022/02/05 14:42:08 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"

void	f1(void) {
	Sample instance;
	std::cout << "nb of instance: " << Sample::getNbInst() << std::endl;
	return;
}

void	f0(void) {

	Sample instance;
	std::cout << "nb of instance: " << Sample::getNbInst() << std::endl;
	f1();
	return;
}

int main() {
	std::cout << "nb of instance: " << Sample::getNbInst() << std::endl;
	f0();
	std::cout << "nb of instance: " << Sample::getNbInst() << std::endl;
}
