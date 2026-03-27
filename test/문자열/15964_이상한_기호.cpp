#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long a,b;
    std::cin >> a >> b;
    std::cout << (a+b)*(a-b);
    
    return 0;
}