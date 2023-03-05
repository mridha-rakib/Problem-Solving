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
            string str = "";
            for(int i = 0; i < A.length(); i++)
            {
                for(int j = 0; j < B.length(); j++)
                {
                    if(A[i] != B[j])
                        str += A[i];
                    if(B[j] != A[i])
                        str += B[j];
                }

            }

            sort(str.begin(), str.end());
            return str;
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
