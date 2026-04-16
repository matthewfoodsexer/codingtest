#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    int dp[15][14]{};
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 14; j++) {
            int sum = 0;
            if (i == 0) {
                sum = j + 1;
            } else {
                for (int k = 0; k <= j; k++) {
                    sum += dp[i - 1][k];
                }
            }
            dp[i][j] = sum;
        }
    }

    for (int i = 0; i < T; i++) {
        int k, n;
        cin >> k >> n;
        cout << dp[k][n - 1] << "\n";
    }

    return 0;
}