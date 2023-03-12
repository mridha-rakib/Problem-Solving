#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution
{
public:
    int searchInsert (vector<int> &nums, int target)
    {
        int low = 0, high, mid, n = nums.size();

        high = n - 1;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (nums[mid] == target) return mid;
            else if (nums[mid] > target)
                high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};



int main()
{
    optimize();

    int t;
    cin >> t;
    while( t-- )
    {
        int n, target;
        cin >> n >> target;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.searchInsert(arr, target) << endl;

    }

    return 0;
}
