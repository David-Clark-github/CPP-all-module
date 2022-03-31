/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:01:01 by david             #+#    #+#             */
/*   Updated: 2022/03/29 14:05:01 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "Bureaucrat.h"

int main(int ac, char **av)
{
	Bureaucrat bob("bob", 150);

	std::cout << bob << std::endl;
}
