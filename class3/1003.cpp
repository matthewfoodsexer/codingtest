#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, pair<int, int>> m;

pair<int, int> fibonacci(int n) {
    if (n == 0) {
        return {1, 0};
    } else if (n == 1) {
        return {0, 1};
    } else {
        if(m.find(n) == m.end()) {
            m[n].first = fibonacci(n - 1).first + fibonacci(n - 2).first;
            m[n].second = fibonacci(n - 1).second + fibonacci(n - 2).second;
        }
        return m[n];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        auto f = fibonacci(n);
        cout << f.first << " " << f.second << "\n";
    }

    return 0;
}