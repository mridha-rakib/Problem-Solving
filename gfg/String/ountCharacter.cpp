//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
            int i,c=0,n=S.size();
            unordered_map<char,int> m;
            for(i=0;i<n-1;i++)
            {
                if(S[i]!=S[i+1])
                {
                    m[S[i]]++;
                }

            }

            if(S[n-1]!=S[n-2])
            {
                m[S[n-1]]++;

            }




            int count=0;
            for(auto k:m){
                if(k.second==N){
                    count++;
                }
            }



            return count;
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
        int n;
        cin >> n;

        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
