#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, stack;
    string str;
    cin >> n;

    for(int i = 0; i < n; i++) {
        stack = 0;
        cin >> str;
        for(char c : str) {
            if(c == '(') {
                stack++;
            } else {
                stack--;
                if(stack < 0)
                    break;
            }
        }
        cout << (stack == 0 ? "YES" : "NO") << "\n";
    }

    return 0;
}
