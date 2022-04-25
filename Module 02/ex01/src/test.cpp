#include <iostream>
#include <climits>


int main(void) {
	std::cout << "???" << 8 << std::endl;
	std::cout << "sizeof(int):        " << sizeof(int) << std::endl;
	std::cout << "sizeof(float):      " << sizeof(float) << std::endl;
	std::cout << "sizeof(double):     " << sizeof(double) << std::endl;
	std::cout << "Limits of (int):    " << INT_MAX << std::endl;
	std::cout << "Limits of (u_int):  " << UINT_MAX << std::endl;
	std::cout << "Limits of (long):   " << LONG_MAX << std::endl;
	std::cout << "Limits of (u_long): " << ULONG_MAX << std::endl;
}
