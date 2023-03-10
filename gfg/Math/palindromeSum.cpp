//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:

    long long reverseNumber( long long n)
    {
        long long rev = 0;
        long long m = n;

        while ( m > 0 )
        {
            int r = m % 10;
            rev = rev * 10 + r;
            m = m / 10;
        }

        return rev;
    }

    int ispalindrome( long long n )
    {
        long long rev = reverseNumber(n);
        return (n == rev)? 1: 0;
    }
    long long isSumPalindrome(long long n){
        // code here

       if(ispalindrome(n))
       {
           return n;
       }
       else
       {
           for (int i = 0; i < 5; i++)
           {
               long long m = reverseNumber(n);
               n = m + n;
               if(ispalindrome(n))
               {
                   return n;
               }
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
