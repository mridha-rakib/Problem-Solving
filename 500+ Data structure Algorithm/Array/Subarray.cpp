#include<bits/stdc++.h>
using namespace std;

bool hasZeroSumSubarray( int nums[],  int n)
{
    unordered_set<int> set;

    //set.insert(0);
    int sum = 0;
    for ( int  i = 0; i < n; i++ )
    {
        sum += nums[i];

        if ( set.find(sum) != set.end())
        {
            for ( auto it : set )
            cout << it << " ";
            return true;
        }
        else
        {
            set.insert(sum);
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while ( t-- )
    {
//        int n;
//        cin >> n;
//        int nums[n];
//        for ( int i = 0; i < n; i++ )
//        {
//            cin >> nums[i];
//        }
        int nums[] = { 4, 2, -3, -1, 0, 4 };
        int n = sizeof(nums)/sizeof(nums[0]);
        hasZeroSumSubarray(nums, n) ?
        cout << "Subarray exists":
             cout << "Subarray does not exist";
    }

    return 0;
}
