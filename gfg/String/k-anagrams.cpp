//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    bool areKAnagrams(string str1, string str2, int k)
    {
        // code here
        map<char, int> mp;
        int cnt = 0;

        if ( str1.length() != str2.length() ) return false;

        for ( int i = 0; i < str1.size(); i++ )
        {
            mp[str1.at(i)]++;
        }

        for ( int i = 0; i < str2.size(); i++ )
        {
            if ( mp[str2.at(i)]  > 0 )
            {
                mp[str2.at(i)]--;
            }
            else
            {
                cnt++;
            }
        }

        if ( cnt > k )
            return false;
        else return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        int k;
        cin>>k;
        Solution ob;
        if(ob.areKAnagrams(str1, str2, k) == true)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
}
// } Driver Code Ends
