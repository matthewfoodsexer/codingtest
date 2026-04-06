#include <iostream>

using namespace std;

int get_factorial(int n) {
    if(n == 0) return 1;
    
    int result = n;
    for (int i = n - 1; i > 1; i--) {
        result *= i;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    cout << get_factorial(n) / (get_factorial(k) * get_factorial(n - k)) << "\n";

    return 0;
}