#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int subArraySum( vector<int>& nums, int n, int k )
{
    unordered_map<int, int> prefixSumCount;
    int prefixSum = 0;
    int count = 0;

    prefixSumCount[0] = 1;


    for( int i = 0; i < n; i++ )
    {
        prefixSum += nums[i];

        if( prefixSumCount.find(prefixSum - k) != prefixSumCount.end())
        {
            count += prefixSumCount[prefixSum - k];
        }
        prefixSumCount[prefixSum]++;
    }

    return count;
}


int main()
{
    optimize();

    int t;
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;

        vector<int>nums(n);
        for( int i = 0; i < n; i++ )
            cin >> nums[i];

        int k; cin >> k;

        cout << subArraySum(nums, n, k) << endl;
    }

    return 0;
}
