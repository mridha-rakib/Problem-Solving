//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.

        vector<long long> dp(sum + 1, 0);
        dp[0] = 1;

        for ( ll j = 0; j < N; j++ )
        {
            for ( ll i = 1; i <= sum; i++ )
            {
                if ( i - coins[j] >= 0 )
                {
                    dp[i] += d[i - coins[j]];
                }
            }
        }

        return dp[sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
