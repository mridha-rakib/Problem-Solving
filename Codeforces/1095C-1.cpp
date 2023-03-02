#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n < k) {
        cout << "NO\n";
        return 0;
    }

    vector<int> a(k, 1);
    int sum = k;

    if (sum > n) {
        cout << "NO\n";
        return 0;
    }

    while (sum < n) {
        int i = 0;
        while (i < k - 1 && a[i] == a[i+1]) {
            i++;
        }
        if (i == k - 1) {
            cout << "NO\n";
            return 0;
        }
        a[i] *= 2;
        sum++;
    }

    cout << "YES\n";
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
