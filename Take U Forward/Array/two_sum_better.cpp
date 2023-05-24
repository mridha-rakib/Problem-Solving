#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {

    unordered_map<int, int> indexs;
    vector<int> ans;

    for ( int i = 0; i < n; i++ )
    {
        int num = arr[i];

        if ( indexs.find(target - num) != indexs.end() )
        {
            ans.push_back( arr[indexs[target-num]]);
            ans.push_back( arr[i]);
        }

        indexs[arr[i]] = i;
    }
    return ans;
}


int main()
{

    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << ans[0] << " " << ans[1]<< endl;

    return 0;
}
