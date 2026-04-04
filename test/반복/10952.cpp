#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b;
    while (std::cin >> a >> b) {
        if (a == 0 && b == 0) break;
        std::cout << a + b << "\n";
    }

    return 0;
}