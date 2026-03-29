#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (cin >> s && s!="0") {
        string revered_s = s;
        reverse(revered_s.begin(), revered_s.end());

        if (revered_s == s)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }

    return 0;
}