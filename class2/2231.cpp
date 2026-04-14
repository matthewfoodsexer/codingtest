#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, result = 0;
    cin >> N;
    for (int i = 2; i < N; i++) {
        string str = to_string(i);
        if (i + str.length() * 9 < N) {
            continue;
        }
        
        int cur = i;
        for (char c : str) {
            cur += c - '0';
        }
        if (cur == N) {
            result = i;
            break;
        }
    }

    cout << result << "\n";

    return 0;
}