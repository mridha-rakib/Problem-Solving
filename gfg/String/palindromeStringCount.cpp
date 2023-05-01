//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends
bool ispalindrome ( char s[], int i, int j )
{
    while ( i <= j )
    {
        if ( s[i] != s[j] )
            return false;
        i++, j--;
    }

    return true;
}

int CountPS(char S[], int N)
{
    //code here
    int ans = 0;

    for ( int i = 0; i < n; i++ )
    {
        for ( int j = i + 1; j < n; j++ )
        {
            if ( ispalindrome(S, i, j))
                ans++;
        }
    }
    return ans;
}
