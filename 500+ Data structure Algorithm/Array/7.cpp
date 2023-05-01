#include<bits/stdc++.h>
using namespace std;


void findLargestSubarray(int nums[], int n)
{
    unordered_map <int, int> map;

    map[0] = -1;

    int len = 0;
    int ending_index = -1;

    int sum = 0;


    for ( int i = 0; i < n; i++ )
    {
        sum += (nums[i] == 0) ? -1 : 1;

        if ( map.find(sum) != map.end() )
        {
            if ( len < i - map[sum] )
            {
                len = i - map[sum];
                ending_index = i;
            }
        }
        else
        {
            map[sum] = i;
        }
    }

    if (ending_index != -1) {
        cout << "[" << ending_index - len + 1 << ", " << ending_index << "]";
    }
    else {
        cout << "No subarray exists";
    }
}

int main()
{

    int nums[] = { 0, 0, 1, 0, 1, 0, 0 };
    int n = sizeof(nums) / sizeof(nums[0]);

    findLargestSubarray(nums, n);

    return 0;
}
