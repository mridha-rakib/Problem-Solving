#include<bits/stdc++.h>
using namespace std;



void rotate(vector<int>& nums, int k)
{

    int n = nums.size();

    if ( n == 0 ) return;

    k = k % n;

    if ( k == 0 ) return;

    int temp[k];

    for ( int i = n - k; i < n; i++ )
    {
        temp[i-(n-k)] = nums[i];
    }

    cout << "N - k : " << n - k - 1 << endl;
    for ( int i = n - k - 1; i >= 0 ; i-- )
    {
        nums[i + k] = nums[i];
    }

    for ( int i = 0; i < k; i++ )
    {
        nums[i] = temp[i];
    }
}


int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    rotate(v, 3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
