//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if ( str1.length() == 1)
            return 0;

        deque < char > c;
        deque < char > c1;

        for ( int i = 0; i < str1.length(); i++ )
        {
            c.push_back( str1[i] );
        }

        for ( int i = 0; i < str1.length(); i++ )
        {
            c1.push_back(str2[i]);
        }

        if ( c == c1 )
            return 1;
        else
        {
            c.clear();
            for ( int i = str1.length() - 2; i < str1.length(); i++ )
            {
                c.push_back( str1[i] );
            }

            for ( int i = 0; i < str1.length() - 2; i++ )
            {
                c.push_back( str1[i] );
            }

            if ( c == c1 )
                return 1;
            else
                return 0;
        }
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
        string b;
        cin>>s>>b;
        Solution obj;
        cout<<obj.isRotated(s,b)<<endl;
    }
    return 0;
}

// } Driver Code Ends
