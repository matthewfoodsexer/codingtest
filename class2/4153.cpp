#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> l(3);

    while (cin >> l[0] >> l[1] >> l[2] && l[0] && l[1] && l[2]) {
        sort(l.begin(), l.end());
        cout << (l[0] * l[0] + l[1] * l[1] == l[2] * l[2] ? "right" : "wrong") << "\n";
    }

    return 0;
}