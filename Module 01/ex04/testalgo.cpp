#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av) {
	std::string	look_for = av[2];
	std::string	replace_by = av[3];
	std::string buffer;
	std::string filename = av[1];
	std::ofstream ofs(filename + ".replace");
	std::ifstream ifs(av[1]);

	while (std::getline(ifs, buffer)) {
		;
	}
	std::string	tmp;

	int	pos = buffer.find(look_for);

	if (pos == std::string::npos) {
		std::cout << buffer << std::endl;
		return 0;
	}
	std::cout << "pos: " << pos << std::endl;
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