//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    // function to find totient of n

    int gcd(int a, int b)
    {
	    if (a == 0)
		    return b;
	    return gcd(b % a, a);
    }
    long long ETF(long long N){
        // code here
        unsigned int result = 1;
        for (int i = 2; i < N; i++)
        if (gcd(i, N) == 1)
            result++;
        return result;

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        cout << ob.ETF(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
