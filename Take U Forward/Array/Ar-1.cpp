#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    bool check(vector<int>& nums)
    {

        const int n = nums.size();
        int rotates = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > nums[(i + 1) % n] && ++rotates > 1)
            {
                cout << nums[(i + 1) % n] << endl;
                cout << rotates << endl;
                return false;
            }

        }
        return true;
    }
};

int main()
{
    Solution solution;

    // Example usage
    int n;
    cin >> n;
    vector < int > arr(n);

    for ( int i = 0; i < n; i++ ) cin >> arr[i];
    cout << solution.check(arr) << endl;  // Output: 1 (true)

    return 0;
}

