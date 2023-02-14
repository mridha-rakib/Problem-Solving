#include <iostream>
#include <vector>
#include <numeric> // for partial_sum algorithm
using namespace std;

int main() {
    int n;
    cin >> n; // read array size

    vector<int> a(n), prefix_sum(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // read array element
    }

    // calculate prefix sum
    partial_sum(a.begin(), a.end(), prefix_sum.begin());

    int l, r;
    cin >> l >> r; // read left and right boundaries

    // calculate sum of elements between l and r (inclusive)
    int sum = prefix_sum[r] - (l == 0 ? 0 : prefix_sum[l-1]);

    cout << "Sum of elements between " << l << " and " << r << ": " << sum << endl;

    return 0;
}
