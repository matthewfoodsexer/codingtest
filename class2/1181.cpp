#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const string &a, const string &b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string word;
    vector<string> words;
    for (int i = 0; i < n; i++) {
        cin >> word;
        words.push_back(word);
    }
    sort(words.begin(), words.end(), compare);

    vector<string>::iterator result = unique(words.begin(), words.end()); 
    words.erase(result, words.end());


    for(string str : words) cout << str << "\n";

    return 0;
}