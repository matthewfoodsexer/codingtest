#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int m, n, k;
int map[51][51];
bool visited[51][51];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void dfs(int x, int y) {
    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
            if (map[nx][ny] == 1 && !visited[nx][ny]) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        cin >> m >> n >> k;

        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));

        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            map[x][y] = 1;
        }

        int worm_count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (map[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    worm_count++;
                }
            }
        }

        cout << worm_count << "\n";
    }

    return 0;
}