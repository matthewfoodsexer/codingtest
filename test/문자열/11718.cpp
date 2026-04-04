#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    do {
        getline(cin,str);
        cout << str << "\n";
    } while (str != "");

    return 0;
}