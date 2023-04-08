//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:

    string removeDups(string s)
    {
        // Your code goes here
       unordered_set<char> seen;
       string ans = "";

       for ( char c : s )
       {
           if ( !seen.count(c) )
           {
               seen.insert(c);
               ans += c;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.


int main()
{


    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;


        Solution ob;
        cout << ob.removeDups(s) << "\n";

    }

    return 0;
}
// } Driver Code Ends
