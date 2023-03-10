//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int lcmOfArray(int N , int A[]) {
        // code here
      long long ans = A[0];

      for(int i=1; i<N; i++){

         long long b = A[i];
         ans =( (ans*b)/__gcd(ans,b))%1000000007;
     }

     return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;
        int A[N];

        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout<<ob.lcmOfArray(N,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends
