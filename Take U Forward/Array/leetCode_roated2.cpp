#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k)
{
    int n = nums.size();

    if ( n == 0 )
        return;
    k = k % n;

//    reverse( nums, nums + k );
//
//    reverse( nums + k, nums + n );
//
//    reverse( nums, nums + n );

    int
}


int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    rotate(v, 4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}


