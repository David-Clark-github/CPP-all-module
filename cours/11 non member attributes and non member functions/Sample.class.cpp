/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:18:58 by dclark            #+#    #+#             */
/*   Updated: 2022/02/05 14:46:59 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.h"

Sample::Sample(void)
{
	std::cout << "constructeur Sample called\n";
	Sample::_nbInst += 1;
}

Sample::~Sample(void)
{
	std::cout << "destructeur ~Sample called\n";
	Sample::_nbInst -= 1;
}

int	Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

int	Sample::_nbInst = 0;
