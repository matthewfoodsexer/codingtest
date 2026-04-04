#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    for (char c : str) {
        if (c < 90)
            std::cout << char(c + 32);
        else
            std::cout << char(c - 32);
    }

    return 0;
}