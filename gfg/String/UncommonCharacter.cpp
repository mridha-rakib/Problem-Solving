//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string UncommonChars(string A, string B)
    {
        // code here
        int freqA[26] = {0}, freqB[26] = {0};

        // iterate over string A and update frequency array
        for (char c : A)
            freqA[c - 'a']++;

        // iterate over string B and update frequency array
        for (char c : B)
            freqB[c - 'a']++;

        // iterate over both strings to find uncommon characters
        string ans = "";
        for (int i = 0; i < 26; i++)
        {
            if (freqA[i] == 0 && freqB[i] > 0)
                ans += char(i + 'a');
            else if (freqA[i] > 0 && freqB[i] == 0)
                ans += char(i + 'a');
        }

        // if no uncommon characters found, return "-1"
        if (ans.length() == 0)
            return "-1";

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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
