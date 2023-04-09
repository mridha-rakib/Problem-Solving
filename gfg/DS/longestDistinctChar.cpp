//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    int cnt = 0;
    int ans = 0;
    for ( int i = 0; i < S.size() - 1; i++ )
    {
        if ( S[i] != S[i + 1] )
        {
            cnt++;
        }
        else
        {
            ans = max ( cnt, ans );
            cnt = 0;
        }
    }
    return ans;
}
