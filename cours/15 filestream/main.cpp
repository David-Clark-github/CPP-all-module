/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:58:10 by dclark            #+#    #+#             */
/*   Updated: 2022/02/15 12:09:56 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main() {
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;
	std::string		st1;
	std::string		st2;
	ifs >> st1 >> st2;

	std::cout << st1 << " " << st2 << std::endl;
	ifs.close();


	std::ofstream	ofs("test.out");
	ofs << "this is a text test" << std::endl;
	ofs.close();
	return 0;
}
