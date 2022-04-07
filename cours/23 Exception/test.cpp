#include <iostream>
#include <string>
#include <stdexcept>

int main(int ac, char **av) {
	try {
		std::cout << av[1] << " & " << av[2] << std::endl;
		if (atoi(av[1]) > atoi(av[2])) {
			throw std::exception(std::logic_error("Hehe"));
		} else {
			std::cout << "arg1 is lower or equal than arg2" << std::endl;
		}
	} catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;;
	}
}
