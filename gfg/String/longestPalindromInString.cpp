//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:

    bool isPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            if(s[i] != s[j])
                return false;
            i++, j--;
        }

        return true;
    }

    string longestPalin (string S)
    {
        // code here
        string longest = "";
        int n = S.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string sub_string = S.substr(i, j - 1);
                if(isPalindrome(sub_string) && sub_string.length() > longest.length())
                {
                    longest = sub_string;
                }
            }
        }
        return longest;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
