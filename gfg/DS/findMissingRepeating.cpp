//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here

        int *result = new int[2];
        int ans = 0, ans1 = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (auto i : mp)
        {
            if (i.second == 2)
                ans = i.first;
        }

        for (int i = 1; i <= n; i++)
        {
            if(mp.find(i) == mp.end())
            {
                ans1 = i;
                break;
            }
        }

        result[0] = ans;
        result[1] = ans1;

        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
