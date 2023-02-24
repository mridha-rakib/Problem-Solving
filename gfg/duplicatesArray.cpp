//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int, int> count;
        vector<int> result;
        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }
        for (auto it : count) {
            if (it.second > 1) {
                result.push_back(it.first);
            }
        }
        if (result.empty()) {
            result.push_back(-1);
        }
        sort(result.begin(), result.end());
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
