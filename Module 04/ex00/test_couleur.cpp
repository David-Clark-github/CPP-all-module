#include <iostream>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#define BLINK "\e[5m"

int main(void) {
	std::cout << RED "Ecris en rouge" << std::endl;
	std::cout << GRN "Ecris en vert" << std::endl;
	std::cout << CYN "Ecris en cyan" NC << std::endl;
	std::cout << BLINK "Ecris en Blink ?" << std::endl;
	std::cout << NC "Ecris en NC ?" << std::endl;
	//std::cout << REDB "Ecris en REDB ?" << std::endl;
	return 0;
}
