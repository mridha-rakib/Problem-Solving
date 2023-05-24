#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k)
{

    int n = a.size();
    int sum = 0, maxlen = 0;

    map<long long, int> preSumMap;

    for ( int i = 0; i < n; i++ )
    {
        sum += a[i];

        if ( sum == k )
            maxlen = max( maxlen, i + 1 );

        int rem = sum - k;

        if ( preSumMap.find( rem ) != preSumMap.end() )
        {
            int len = i - preSumMap[rem];
            maxlen = max( maxlen, len );
        }


        if ( preSumMap.find(sum) == preSumMap.end() )
        {
            preSumMap[sum] = i;
        }
    }


    return maxlen;

}


int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;


    return 0;
}
