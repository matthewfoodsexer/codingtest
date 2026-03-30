#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, sum=0;
    cin >> n;

    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[n];
        if (scores[n] > m)
            m = scores[n];
    }

    for (int i = 0; i < n; i++) {
        // sum += scores[i] / m * 100;
        cout << sum;
    }

    // cout << fixed;
    // cout << sum / n << "\n";

    return 0;
}