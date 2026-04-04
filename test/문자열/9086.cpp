#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string str;
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> str;
        std::cout << str.front() << str.back() << "\n";
    }

    return 0;
}