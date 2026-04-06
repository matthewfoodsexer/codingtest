#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Coord {
   public:
    int x, y;
};

bool compare(Coord a, Coord b) {
    if(a.x == b.x) {
        return a.y < b.y;
    } else {
        return a.x < b.x;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n;

    vector<Coord> coords(n);

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        coords[i].x = x;
        coords[i].y = y;
    }

    sort(coords.begin(), coords.end(), compare);
    
    for(Coord c : coords) {
        cout << c.x << " " << c.y << "\n";
    }

    return 0;
}