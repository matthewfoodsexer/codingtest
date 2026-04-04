#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cur, result = 0;
    cin >> n >> m;

    vector<int> cards(n);
    for (int i = 0; i < n; i++)
        cin >> cards[i];

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                cur = cards[i] + cards[j] + cards[k];
                if (cur > result && cur <= m)
                    result = cur;
            }
        }
    }

    cout << result << "\n";

    return 0;
}