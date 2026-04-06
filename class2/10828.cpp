#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    string cmd;
    cin >> n;

    vector<int> stack;

    for(int i = 0; i < n; i++) {
        cin >> cmd;
        if(cmd == "push") {
            cin >> x;
            stack.push_back(x);
        } else if(cmd == "pop") {
            if(stack.empty()) {
                cout << -1 << "\n";
            } else {
                cout << stack.back() << "\n";
                stack.pop_back();
            }
        } else if(cmd == "top") {
            cout << (stack.empty() ? -1 : stack.back()) << "\n";
        } else if(cmd == "size") {
            cout << stack.size() << "\n";
        } else if(cmd == "empty") {
            cout << (stack.empty() ? 1 : 0) << "\n";
        }
    }
    
    return 0;
}