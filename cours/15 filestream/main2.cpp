/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:22:48 by dclark            #+#    #+#             */
/*   Updated: 2022/02/15 12:43:50 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fstream>
# include <iostream>

int main(int ac, char **av) {
	std::ifstream	ifs (av[1]);

	std::string		st1;
	std::string		st2;

	getline(ifs, st1);
	getline(ifs, st2);
	std::cout << st1 << std::endl << st2 << std::endl;
	ifs.close();
}
