#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, age;
    string name;
    multimap<int, string> ageMap;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> age >> name;
        ageMap.insert({age, name});
    }

    for(auto &[key, value] : ageMap)
        cout << key << " " << value << "\n";

    return 0;
}