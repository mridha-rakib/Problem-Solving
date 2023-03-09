//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string a, string b)
    {
        // code here
        int i = 0, j = 0;

        while(i < b.length() && j < a.length())
        {
            if (b[i] == a[j])
            {
                j++;
            }
            i++;
        }

        return ( j == a.length());
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}

// } Driver Code Ends
