#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cur = 1;
    cin >> n;

    string result;
    vector<int> stack;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        while (cur <= num) {
            result += "+\n";
            stack.push_back(cur);
            cur++;
        }
        result += "-\n";
        if (stack.back() != num) {
            result = "NO\n";
            break;
        }
        stack.pop_back();
    }

    cout << result;

    return 0;
}