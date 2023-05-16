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
            cout << nums [( i + 1) % n] << endl;
            if (nums[i] > nums[(i + 1) % n] && ++rotates > 1)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for ( int i = 0; i < n; i++ )
        cin >> arr[i];

    Solution ob;
    bool f = ob.check(arr);

    if ( f )
        cout << "Ok" << endl;
    else cout << "Not Ok" << endl;
    return 0;
}
