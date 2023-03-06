//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_set<char> set;
    for(char c : s)
    {
        if(set.find(c) != set.end())
        {
            return string(1, c);
        }
        set.insert(c);
    }
    return "-1";
}
