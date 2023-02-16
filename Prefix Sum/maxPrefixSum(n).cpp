#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q)
    {
        vector<int> prefix_sum(N);
        prefix_sum[0] = a[0];

        // calculate prefix sum of the input array
        for(int i = 1; i < N; i++) {
            prefix_sum[i] = prefix_sum[i-1] + a[i];
        }

        vector<int> result;
        for(int i = 0; i < Q; i++) {
            int left = L[i] - 1;
            int right = R[i] - 1;

            // calculate the maximum prefix sum between L[i] and R[i]
            int max_prefix_sum = prefix_sum[right];
            if (left > 0) {
                max_prefix_sum -= prefix_sum[left - 1];
            }

            // binary search to find the maximum element before L[i]
            int max_before = 0;
            if (left > 0) {
                int lo = 0, hi = left - 1;
                while (lo <= hi) {
                    int mid = (lo + hi) / 2;
                    if (prefix_sum[mid] > max_before) {
                        max_before = prefix_sum[mid];
                    }
                    if (prefix_sum[mid] > prefix_sum[left - 1]) {
                        hi = mid - 1;
                    } else {
                        lo = mid + 1;
                    }
                }
            }

            result.push_back(max(max_before + max_prefix_sum, max_prefix_sum));
        }

        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n], L[q], R[q];

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < q; i++) cin >> L[i] >> R[i];
        Solution obj;
        vector<int> ans = obj.maxPrefixes(a, L, R, n, q);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}

