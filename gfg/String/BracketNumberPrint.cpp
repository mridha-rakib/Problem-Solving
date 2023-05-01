//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:

    vector<int> bracketNumbers(string s)
    {
        // Your code goes here
        int a = 0;
        vector < int > res;
        stack < int > stk;
        for ( auto x : s )
        {
            if ( x == '(')
            {
                stk.push(++a);
                res.push_back( stk.top());
            }
            if ( x == ')' )
            {
                res.push_back( stk.top());
                stk.pop();
            }
        }

        return res;
    }
};

//{ Driver Code Starts.

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while(t--)
    {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for(auto i:ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
