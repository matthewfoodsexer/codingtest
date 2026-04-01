#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    bool flag = false;
    cin >> n;

    queue<int> cards;
    for (int i = 0; i < n; i++)
        cards.push(i + 1);

    while (cards.size() > 1) {
        temp = cards.front();
        cards.pop();
        if (flag) {
            cards.push(temp);
        }
        flag = !flag;
    }

    cout << cards.front() << "\n";

    return 0;
}