//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        string ans = "";

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == s[i + 1])
                continue;
            else
                ans += s[i];
        }

        return ans;
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
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
}




// } Driver Code Ends
