/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:15:09 by david             #+#    #+#             */
/*   Updated: 2022/04/24 12:29:24 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.h>

int main(int, char **) {
	// using std::find with array and pointer:
	int myints[] = { 10, 20, 30, 40 };

	std::vector<int> myvector (myints,myints+4);
	std::vector<int>::iterator it;
	
	//Recherche avec un container vector de int
	std::cout << "easyfind avec myvector" << std::endl;
	easyfind(myvector, 30);
	easyfind(myvector, 8);
	easyfind(myvector, 10);

	std::list<int> lst;
	std::vector<int>::iterator iv;

	for (iv = myvector.begin(); iv != myvector.end(); iv++)
		lst.push_back(*iv);

	std::cout << std::endl;
	//Recherche avec un container list de int
	std::cout << "easyfind avec lst" << std::endl;
	easyfind(lst, 30);
	easyfind(lst, 8);
	easyfind(lst, 10);
	return 0;
}
