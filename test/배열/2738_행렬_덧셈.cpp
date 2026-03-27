#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, t;
    std::cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n * 2; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> t;
            if (i < n) {
                a[i][j] = t;
            } else {
                std::cout << a[i - n][j] + t << " ";
                if (j + 1 == m) {
                    std::cout << "\n";
                }
            }
        }
    }

    return 0;
}