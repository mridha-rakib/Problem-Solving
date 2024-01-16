#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b > 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r;
        vector<pair<int, int>> possiblePairs;
        for (int a = l; a <= r; a++) {
            for (int b = a + 1; b <= r; b++) {
                if (gcd(a, b) != 1) {
                    possiblePairs.push_back({a, b});
                }
            }
        }
        if (possiblePairs.empty()) {
            cout << -1 << endl;
        } else {
            cout << possiblePairs[0].first << " " << possiblePairs[0].second << endl;
        }
    }
    return 0;
}
