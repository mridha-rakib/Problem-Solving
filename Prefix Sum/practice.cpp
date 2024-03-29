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

    int l, r;
    cin >> l >> r; // read left and right boundaries

    // calculate sum of elements between l and r (inclusive)
    int sum = prefix_sum[r] - (l == 0 ? 0 : prefix_sum[l-1]);

    cout << "Sum of elements between " << l << " and " << r << ": " << sum << endl;

    return 0;
}
