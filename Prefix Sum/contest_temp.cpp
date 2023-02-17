#include <iostream>
#include <vector>

using namespace std;

bool can_place(vector<string>& rows, int n, int m) {
    // Check if the first row has no consecutive cells with the same color
    for (int j = 1; j < m; j++) {
        if (rows[0][j] == rows[0][j-1]) {
            return false;
        }
    }
    // Check if any cell has an invalid color
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rows[i][j] != 'R' && rows[i][j] != 'B') {
                return false;
            }
        }
    }
    // Check if the colors alternate in every row
    for (int i = 1; i < n; i++) {
        if (rows[i][0] == rows[i-1][0]) {
            return false;
        }
        for (int j = 1; j < m; j++) {
            if (rows[i][j] == rows[i][j-1] || rows[i][j] == rows[i-1][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> rows(n);
        for (int i = 0; i < n; i++) {
            cin >> rows[i];
        }
        if (can_place(rows, n, m)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

