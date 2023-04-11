//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int kThSmallestFactor(int n, int k)
    {
        // code here
        int i = 1;

        for ( i; i * i < n; i++ )
        {
            if ( n % i == 0 )
            {
                k--;
                if ( k == 0 ) return i;
            }
        }

        if ( i - ( n / i ) == 1 ) i--;

        for (; i >= 1; i-- )
        {
            if ( n % i == 0 )
            {
                k--;
                if ( k == 0 ) return (n / i);
            }
        }

        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.kThSmallestFactor(N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
