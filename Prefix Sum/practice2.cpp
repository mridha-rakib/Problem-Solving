#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000; // maximum array size

int main() {
    int n;
    int a[MAXN], prefix_sum[MAXN];

    cin >> n; // read array size

    for (int i = 0; i < n; i++) {
        cin >> a[i]; // read array element
    }

    // calculate prefix sum
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i-1] + a[i];
    }

    // output prefix sum
    for (int i = 0; i < n; i++) {
        cout << prefix_sum[i] << " ";
    }
    cout << endl;

    return 0;
}

