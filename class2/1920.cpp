#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    unordered_set<int> num_set(nums.begin(), nums.end());
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        cout << (num_set.count(x) ? 1 : 0) << "\n";
    }

    return 0;
}