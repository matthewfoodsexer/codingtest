#include <cmath>
#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n == 0 || n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if (is_prime(i))
            cout << i << "\n";
    }

    return 0;
}