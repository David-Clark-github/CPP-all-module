#include <iostream>

int main(void) {
	int *a = new int[5];
	for (int i = 0; i < 5; i++)
		a[i] = i;
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << std::endl;
}
