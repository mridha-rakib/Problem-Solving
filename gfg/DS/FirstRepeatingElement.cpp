//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n)
    {
        // code here
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for ( auto i : mp )
            cout << i.first<< " " << i.second<< endl;

        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] > 1)
            {
                return i+1;
            }
        }

        return -1;
    }
};

class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n)
    {
        // code here
        unordered_map<int, pair<int, int>>mp;

        int idx = INT_MAX;
        int seen = 0;

        for ( int i = 0; i < n; i++ )
        {
            mp[arr[i]].first++;
            if ( mp[arr[i]].first < 2 )
                mp[arr[i]].second = i;
        }

        for ( auto x : mp )
        {
            if ( x.second.first > 1 )
            {
                seen++;
                idx = min ( idx, x.second.second );
            }
        }

        if(seen)
            return idx+1;

        return -1;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends
