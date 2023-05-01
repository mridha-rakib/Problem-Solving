//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {

        // Your code here

        int sz1 = str1.size();
        int sz2 = str2.size();

        if ( sz1 != sz2 )
            return false;

        unordered_map<char, char> mp;
        unordered_map<char, char> tp;

        int i = 0;

        while ( i < m )
        {
            if ( mp.find( str1[i]) != mp.end() )
            {
                if ( mp[str1[i]] != str2[i] )
                {
                    return false;
                }
            }

            if ( tp.find(str2[i]) != tp.end() )
            {
                if ( tp[str2[i]] != str1[i] )
                {
                    return false;
                }
            }

            mp[s]

        }

    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }

    return 0;
}
// } Driver Code Ends
