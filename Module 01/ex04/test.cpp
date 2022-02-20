#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
    size_t  pos;

    std::string s1 = av[1];
    std::string s2 = av[2];
    std::string tmp;

    int s2len = s2.length();

    for (int i = 0; i < s1.length() + 1; i++) {
        tmp = s1.substr(i);
        std::cout << tmp << std::endl;
    }

    pos = s1.find(s2);
    if (pos == std::string::npos) {
        std::cout << "aucune correspondance." << std::endl;
    } else {
        std::cout << "pos: " << pos << std::endl;
    }
}