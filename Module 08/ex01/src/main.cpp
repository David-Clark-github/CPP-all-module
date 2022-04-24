/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:11:16 by david             #+#    #+#             */
/*   Updated: 2022/04/24 16:23:12 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.h>

int main(int, char **) {
	Span sp = Span(5);

	sp.addNumber(3);
	sp.addNumber(6);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
