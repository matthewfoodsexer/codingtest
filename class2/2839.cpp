#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    int count = -1;
    for (int i = N / 5; i >= 0; i--) {
        int remaining_weight = N - (i * 5);
        if (remaining_weight % 3 == 0) {
            count = remaining_weight / 3 + i;
            break;
        }
    }

    cout << count << "\n";

    return 0;
}