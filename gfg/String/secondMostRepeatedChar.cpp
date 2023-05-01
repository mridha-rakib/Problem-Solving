//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string, int> mp;
        for ( int i = 0; i < n; i++ )
        {
            mp [ arr[i] ] ++;
        }

       int maxFreq = 0;

       for ( int i = 0; i < n; i++ )
       {

           if ( mp[arr[i]] > maxFreq )
            maxFreq = mp[arr[i]];
       }

       int secFrequency = 0;

       string ans = "";

       for ( int i = 0; i < n; i++ )
       {
           if ( mp[arr[i]] > secFrequency && mp[arr[i]] < maxFreq )
           {
               ans = arr[i];
               secFrequency = mp[arr[i]];
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
