#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string star(i + 1, '*');
        std::cout << star << "\n";
    }

    return 0;
}