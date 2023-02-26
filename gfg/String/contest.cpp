#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string beautifulArray(int n, vector<int>& a)
    {
        // Code here
        int gcdVal = a[0];
        for (int i = 1; i < n; i++)
        {
            gcdVal = __gcd(gcdVal, a[i]);
        }
        if (gcdVal > n)
        {
            return "No";
        }

        // Check if all prefixes of length at least 2 are good
        for (int i = 2; i <= n; i++)
        {
            int prefixGcd = a[0];
            for (int j = 1; j < i; j++)
            {
                prefixGcd = __gcd(prefixGcd, a[j]);
            }
            if (prefixGcd > i)
            {
                return "No";
            }
        }

        return "Yes";
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.beautifulArray(n, a) << endl;
    }
    return 0;
}
