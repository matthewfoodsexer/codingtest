#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, card, myCard;
    unordered_map<int, int> cardMap;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> card;
        cardMap[card]++;
    }

    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> myCard;
        cout << cardMap[myCard] << " ";
    }
    
    return 0;
}