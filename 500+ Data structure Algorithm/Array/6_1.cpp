#include<bits/stdc++.h>
using namespace std;

void findMaxLenSubarray(int nums[], int n, int s)
{
    unordered_map<int, int> map;

    map[0] = -1;

    int target = 0;
    int len = 0;
    int ending_index = -1;

    for ( int i = 0; i < n; i++ )
    {
        target += nums[i];
        //cout << target << endl;
        if ( map.find(target) == map.end())
        {
            map[target] = i;
            //cout << map[target] << endl;
        }




        if ( map.find( target - s) != map.end()
                && len < i - map[target - s])
        {
            // cout << "Hello" << endl;
            len = i - map[target - s];
            cout << "i : " << i << "mp : " << map[target - s] << endl;
            // cout<< "For : " << map[target - s] << endl;
            ending_index = i;
            // cout <<"Ending : " << ending_index << endl;

        }
    }

    for ( auto i : map )
        cout << i.first << " " << i.second << endl;

    cout << "[" << (ending_index - len + 1) << " , " << ending_index << "]" << endl;
}

int main()
{
    int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int target = 8;

    int n = sizeof(nums) / sizeof(nums[0]);

    findMaxLenSubarray(nums, n, target);

    return 0;
}
