#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    queue<int> q;
    vector<int> result;
    for (int i = 1; i <= n; i++)
        q.push(i);

    while (!q.empty()) {
        for (int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        result.push_back(q.front());
        q.pop();
    }

    cout << "<";
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i != n - 1) {
            cout << ", ";
        }
    }
    cout << ">\n";

    return 0;
}