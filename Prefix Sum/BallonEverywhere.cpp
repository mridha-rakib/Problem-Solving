#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int maxInstance(string s)
    {

        unordered_map<char, int> mp;
        int n = s.size();

        // count the frequency of each character
        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        return min(mp['b'],min(mp['a'],min(mp['l']/2,min(mp['o']/2,mp['n']))));
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
