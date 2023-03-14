#include <iostream>
#include <vector>

using namespace std;

// Function to find the maximum subarray sum
int maxSubArraySum(vector<int>& nums)
{
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here += nums[i];
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
        if (max_ending_here > max_so_far)
        {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

// Function to find the subarray with maximum sum
vector<int> maxSubArray(vector<int>& nums)
{
    int start = 0, end = 0, max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (max_ending_here < 0)
        {
            max_ending_here = nums[i];
            start = i;
        }
        else
        {
            max_ending_here += nums[i];
        }
        if (max_ending_here > max_so_far)
        {
            max_so_far = max_ending_here;
            end = i;
        }
    }
    return vector<int> {start, end};
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_sum = maxSubArraySum(nums);
    vector<int> max_subarray = maxSubArray(nums);
    cout << "Maximum subarray sum: " << max_sum << endl;
    cout << "Maximum subarray: ";
    for (int i = max_subarray[0]; i <= max_subarray[1]; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
