//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007

// } Driver Code Ends

const int M = 1e9 + 7;
#define ll long long
class Solution{
    public:

    long long pw(int n, int r, int M)
    {
        if(r == 0) return 1;

        if(!r & 1)
        {
            int t = pw(n, r >> 1, M);
            return (1LL * t * t) % M;
        }
        else
        {
            int t = pw(n, (r - 1) >> 1, M);
            t = (1LL * t * t) % M;
            return (1LL * n * t) % M;
        }
    }

    long long power(int N,int R){

        //Your code here
        if(R == 0) return 0;

        long long ans = pw(N, R, M);
        return ans;
    }

};

//{ Driver Code Starts.

// compute reverse of a number
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0)
      {
        rev_num = rev_num*10 + n%10;
        n = n/10;
      }
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases

    while(T--)
    {
        long long N;
        cin>>N;//input N

        long long R = 0;

        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends
