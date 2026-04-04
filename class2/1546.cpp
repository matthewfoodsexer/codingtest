#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m = 0, total = 0;
    cin >> n;

    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        total += scores[i];
        if (scores[i] > m)
            m = scores[i];
    }

    cout << (float(total) / n) / m * 100 << "\n";

    return 0;
}