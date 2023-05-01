//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    /*You are required to complete this method */
    int atoi(string str)
    {
        //Your code here
        int flag = 0;

        for ( int i = 0; i < str.size(); i++ )
        {
            if ( (str[i] >= '0' && str[i] <='9') || str[i] == '+' || str[i] == '-')
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }

        for ( int i = 1; i < str.size(); i++ )
        {
            if ( str[i] == '-' || str[i] == '+' )
                return -1;
        }

        if ( flag == 1 ) return -1;

        int ans = stoi( str );
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
        cout<<ob.atoi(s)<<endl;
    }
}
// } Driver Code Endss
