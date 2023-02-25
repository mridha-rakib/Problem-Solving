//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // Reverse the entire string
        reverse(S.begin(), S.end());

        int start = 0;
        int end = 0;

        // Traverse the string
        while (end < S.length())
        {
            // Find the start of a word
            while (end < S.length() && S[end] != '.')
            {
                end++;
            }

            // Reverse the word
            reverse(S.begin() + start, S.begin() + end);

            // Move to the next word
            start = end + 1;
            end = start;
        }

        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
