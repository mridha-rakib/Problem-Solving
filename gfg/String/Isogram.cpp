//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        unordered_map<char, int> freq;
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]]++;
        }

        for (auto i : freq)
        {
            if(i.second > 1)
            {
                return 0;
            }
        }
        return 1;
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
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;

    }
	return 0;
}
// } Driver Code Ends
