#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<int>ans;
        int first = -1, last = -1;

        for(int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                if(first == -1)
                    first = i;
                last = i;
            }
        }
        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};


int main()
{
    int n, target;
    cin >> n;
    cin >> target;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    Solution obj;

    vector<int> res = obj.searchRange(arr, target);
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}
