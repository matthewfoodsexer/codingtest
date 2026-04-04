#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, result = 64;
    cin >> n >> m;

    string board[n];

    for (int i = 0; i < n; i++)
        cin >> board[i];

    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            int first_W = 0;
            int first_B = 0;
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    char correct_W = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char correct_B = ((x + y) % 2 == 0) ? 'B' : 'W';

                    if(board[i+x][j+y] != correct_W) {
                        first_W++;
                    }
                    if(board[i+x][j+y] != correct_B) {
                        first_B++;
                    }
                }
            }
            result = min({result, first_W, first_B});
        }
    }

    cout << result << "\n";

    return 0;
}