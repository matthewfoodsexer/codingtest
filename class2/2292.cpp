#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    int i = 1, sum = 1;
    while (N > sum) {
        sum += i * 6;
        i++;
    }
    cout << i << "\n";

    return 0;
}