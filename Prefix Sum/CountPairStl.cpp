//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here
        unordered_map<int, int> freq;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int complement = k - arr[i];
            if (freq.find(complement) != freq.end())
                count += freq[complement];
            freq[arr[i]]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
}
// } Driver Code Ends

