#include<bits/stdc++.h>
using namespace std;

void solve( int nums[], int n )
{
    vector<int>pos;
    vector<int>neg;


    for ( int i = 0; i < n; i++ )
    {
        if ( nums[i] < 0 ) neg.push_back(nums[i]);
        else pos.push_back(nums[i]);
    }

    int j = 0, k = 0;

    for ( int i = 0; i < n; i++ )
    {
        if ( i % 2 != 0 )
        {
            nums[i] = neg[j];
            j++;
        }
        else
        {
            nums[i] = pos[k];
            k++;
        }
    }

    for ( int i = 0; i < n; i++ )
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}


int main()
{

    int nums[] = {3, 1, -2, -5, 2, - 4 };

    int n = sizeof(nums)/sizeof(nums[0]);

    solve( nums, n );

    return 0;
}
