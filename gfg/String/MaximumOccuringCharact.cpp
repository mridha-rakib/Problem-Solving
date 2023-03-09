//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char, int> ans;

        for(int i = 0; i < str.length(); i++)
        {
            ans[str[i]]++;
        }

        int mx = 0; char ch = 'z';

        for( auto i : ans )
        {
            if( mx < i.second )
            {
                mx = i.second;
                ch = i.first;
            }
            else if( mx == i.second )
            {
                ch = ( i.first < ch )? i.first:ch;
            }
        }
        return ch;
    }

};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
