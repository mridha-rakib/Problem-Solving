#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findArrayIntersection(vector<int> &arr1, int n,
                                      vector<int> &arr2, int m)
    {
        // Write your code here.

        int i = 0, j = 0;

        vector < int > insertion;

        while ( i < n && j < m )
        {
            if ( arr1[i] == arr2[j] )
            {
                insertion.push_back( arr1[i] );
                i++, j++;
            }
            if ( arr1[i] < arr2[j] )
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return insertion;

    }
};



int main()
{
    int n, m;
    cin >> n >> m;

    vector<int>arr1(n);
    vector<int>arr2(m);

    for ( int i = 0; i < n; i++ )
    {
        cin >> arr1[i];
    }

    for ( int i = 0; i < m; i++ )
    {
        cin >> arr2[i];
    }

    Solution ob;
    vector<int> ans = ob.findArrayIntersection(arr1, n, arr2, m);

    for ( auto i : ans )
        cout << i << " ";
    cout << endl;

    return 0;
}
