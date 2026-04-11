#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < INT_MAX; i++) {
        if(to_string(i).find("666") != string::npos) {
            n--;
            if(n == 0) {
                cout << i << "\n";
                break;
            }
        }
    }
    
    return 0;
}