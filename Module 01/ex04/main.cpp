/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:25:48 by david             #+#    #+#             */
/*   Updated: 2022/02/20 15:25:49 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av) {
    if (ac != 4) {
	    std::cout << "Veuillez mettre un fichier" << std::endl << "Et deux argument." << std::endl;
        return 0;
	}
    std::string tmp = av[1];
    std::ofstream	ofs(tmp + ".replace");
    ofs << "ceci est un test" << std::endl;
    ofs.close();
}