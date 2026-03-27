#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int n;
        std::cin >> n;
        sum += n * n;
    }

    std::cout << sum % 10 << "\n";

    return 0;
}