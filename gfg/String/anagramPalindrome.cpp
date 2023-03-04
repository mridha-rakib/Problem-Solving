//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isPossible (s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    int c = 0;
    int n = S.length();
    map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[S[i]]++;
    }

    for (auto i : mp )
    {
        if(i.second % 2 != 0)
        {
            c++;
        }
    }

    if( c > 1)
        return 0;
    return 1;
}
