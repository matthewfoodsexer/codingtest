#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, total = 0;
    cin >> N;

    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    map<int, int> counts;
    for (int n : nums) {
        total += n;
        counts[n]++;
    }

    vector<pair<int, int>> counts_vec(counts.begin(), counts.end());
    sort(counts_vec.begin(), counts_vec.end(), [](const auto &a, const auto &b) { return a.second > b.second; });

    vector<int> modes;
    int max_count = counts_vec[0].second;
    for (const auto &item : counts_vec) {
        if (item.second == max_count) {
            modes.push_back(item.first);
        } else {
            break;
        }
    }

    cout << (int)round((float)total / N) << "\n";
    cout << nums[(N - 1) / 2] << "\n";
    cout << (modes.size() > 1 ? modes[1] : modes[0]) << "\n";
    cout << nums.back() - nums[0] << "\n";

    return 0;
}