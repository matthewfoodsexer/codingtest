#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, min_shirts = 0;
    cin >> n;

    vector<int> sizes(6);
    for (int i = 0; i < 6; i++) {
        cin >> sizes[i];
    }

    int t, p;
    cin >> t >> p;

    for (int s : sizes) {
        min_shirts += (s + t - 1) / t;
    }

    cout << min_shirts << "\n";
    cout << n / p << " " << n % p << "\n";

    return 0;
}