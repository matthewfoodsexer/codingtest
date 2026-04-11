#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> num = {1};
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int j = num.size() - 1; j >= 0; j--) {
            int cur = num[j] * i + carry;
            num[j] = cur % 10;
            carry = cur / 10;
        }

        while (carry) {
            num.insert(num.begin(), carry % 10);
            carry /= 10;
        }
    }

    int i = num.size();
    while (i >= 0) {
        i--;  
        if(num[i] != 0)
            break;
    }

    cout << num.size() - (i + 1) << "\n";
    
    return 0;
}