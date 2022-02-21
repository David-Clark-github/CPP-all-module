/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:25:48 by david             #+#    #+#             */
/*   Updated: 2022/02/21 12:15:32 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av) {
    if (ac != 4) {
	    std::cout << "Veuillez mettre un fichier" << std::endl << "Et deux argument." << std::endl;
        return 0;
	}
	std::string		filename = av[1];
    std::ifstream	ifs(filename);
    std::ofstream	ofs(filename + ".replace");
	std::string		look_for = av[2];
	std::string		replace_by = av[3];
	std::string		buffer;
	std::string		buffer_tmp;
	std::string		nl = "\n";
	std::string		tmp;
	int				pos;

	while (std::getline(ifs, buffer_tmp)) {
		buffer += buffer_tmp;
		buffer += nl;
	}

	buffer.erase(buffer.length() - 1);
	pos = buffer.find(look_for);
	
	if (pos == std::string::npos) {
		std::cout << buffer << std::endl;
		return 0;
	}
	
	while (pos != std::string::npos) {
		tmp = buffer.substr(0, pos);
		ofs << tmp << replace_by;
		tmp = buffer.substr(pos + look_for.length());
		buffer = tmp;
		pos = tmp.find(look_for);
	}
	ofs << tmp << std::endl;
	ofs.close();
}
