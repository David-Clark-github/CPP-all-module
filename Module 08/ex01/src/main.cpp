/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:11:16 by david             #+#    #+#             */
/*   Updated: 2022/04/25 12:04:41 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.h>

int main(int, char **) {
	Span sp = Span(5);
	Span test = Span(0, 50);
	Span cp = test;

	sp.addNumber(3);
	sp.addNumber(6);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << cp.longestSpan() << std::endl;
	std::cout << cp.shortestSpan() << std::endl;
	return 0;
}
