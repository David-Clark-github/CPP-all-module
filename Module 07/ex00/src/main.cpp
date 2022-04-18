/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:01:41 by david             #+#    #+#             */
/*   Updated: 2022/04/18 17:10:13 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.h>

template<typename T>
void	swap(T & a, T & b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(const T & a, const T & b) {
	if (a == b)
		return (b);
	if (a > b)
		return (b);
	return (a);
}

template<typename T>
T	max(const T & a, const T & b) {
	if (a == b)
		return (b);
	if (a > b)
		return (a);
	return (b);
}

int main(void) {
	int a = 2;
	int b = 3;

	::swap(a, b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min(a, b): " << ::min(a, b) << std::endl;
	std::cout << "max(a, b): " << ::max(a, b) << std::endl;

	std::string c = "chaine 1";
	std::string d = "chaine 2";
	std::cout << std::endl;
	std::cout << "avant swap() c: [" << c << "]" << std::endl;
	std::cout << "avant swap() d: [" << d << "]" << std::endl;
	std::cout << "swap(c, d)" << std::endl;
	::swap(c, d);
	std::cout << "apres swap() c: [" << c << "]" << std::endl;
	std::cout << "apres swap() d: [" << d << "]" << std::endl;
	std::cout << "min(c, d): " << ::min(c, d) << std::endl;
	std::cout << "max(c, d): " << ::max(c, d) << std::endl;
}
