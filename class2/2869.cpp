#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double A, B, V;
    cin >> A >> B >> V;

    V -= A;
    cout << fixed << (int)ceil(V / (A - B)) + 1 << "\n";

    return 0;
}