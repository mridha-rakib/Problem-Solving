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
        if ( str1.size() != str2.size() )
            return false;

        unordered_map < char, char > mp;
        unordered_set < char > s;

        for ( int i = 0; i < str1.size(); i++ )
        {
            if ( mp.count(str1[i]) == 0 &&
                    s.count( str2[i]) == 0)
            {
                mp[str1[i]] = str2[i];
                s.insert( str2[i] );
            }
            else if ( mp.count( str1[i]) == 0 &&
                      s.count(str2[i] != 0))
            {
                return false;
            }
            else if ( mp[str1[i]] != str2[i] )
            {
                return false;
            }

        }

        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--)
    {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }

    return 0;
}
// } Driver Code Ends
