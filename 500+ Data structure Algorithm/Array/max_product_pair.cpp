#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    pair<int, int> findPair(vector<int> const &nums)
    {
        sort( nums.begin(), nums.end() );

    }
};

int main()
{

    int t;
    cin >> t;

    while ( t-- )
    {
        int n;
        cin >> n;
        vector<int> arr(n), ans(n);

        for ( int i = 0; i < n; i++ )
        {
            cin >> arr[i];
        }

        Solution ob;
        //pair<int, int> pr =
        ans = ob.findPair(arr, n);

//        cout << pr[0] <<" " << pr[1] << endl;
    }

    return 0;
}
