#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int i = 0; i < N; i++) {
            int p;
            cin >> p;
            q.push({p, i});
            pq.push(p);
        }

        int cnt = 0;

        while (!q.empty()) {
            int cur_priority = q.front().first;
            int cur_idx = q.front().second;
            q.pop();

            if (cur_priority == pq.top()) {
                cnt++;
                pq.pop();

                if (cur_idx == M) {
                    cout << cnt << "\n";
                    break;
                }
            } else {
                q.push({cur_priority, cur_idx});
            }
        }
    }

    return 0;
}