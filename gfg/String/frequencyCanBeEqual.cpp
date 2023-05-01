//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:
    bool sameFreq(string s)
    {
        // code here
        // code here
        vector<int>chCnt(26, 0);
        for(auto ch:s)
        {
            ++chCnt[ch-'a'];
        }

        pair<int, int> minCnt = {0, 0}, maxCnt = {0, 0};
        for(int ind=0; ind<26; ind++)
        {
            // cout<<chCnt[ind]<<' '<<maxCnt<<' '<<minCnt<<endl;
            if(chCnt[ind] == 0)
                continue;

            if(chCnt[ind] == maxCnt.first)
            {
                ++maxCnt.second;
            }
            else if(chCnt[ind] == minCnt.first)
            {
                ++minCnt.second;
            }
            else if(maxCnt.first == 0)
            {
                maxCnt = {chCnt[ind], 1};
            }
            else if(chCnt[ind] > maxCnt.first && minCnt.first == 0)
            {
                minCnt = maxCnt;
                maxCnt = {chCnt[ind], 1};
            }
            else if(minCnt.first == 0)
            {
                minCnt = {chCnt[ind], 1};
            }
            else
            {
                return false;
            }
        }

        if(
            (minCnt.first == 0)
            || (minCnt.first == 1 && minCnt.second == 1)
            || (abs(maxCnt.first - minCnt.first) == 1 && maxCnt.second == 1)
        )
        {
            return true;
        }
        return false;

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
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
