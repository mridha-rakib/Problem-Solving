#include<bits/stdc++.h>
using namespace std;

void findPair( int nums[], int n, int target )
{
    for ( int i = 0; i < n; i++ )
    {
        for ( int j = i + 1; j < n; j ++ )
        {
            if ( nums[i] + nums[j] == target )
            {
                cout << nums[i] << " " << nums[j] << endl;
                return;
            }
        }
    }
    cout << "Pair not found" << endl;
}


int main()
{

    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target;
    cin >> target;

    int n = sizeof(nums) / sizeof(nums[0]);

    findPair(nums, n, target);

    return 0;
}
