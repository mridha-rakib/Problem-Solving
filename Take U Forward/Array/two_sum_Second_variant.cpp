#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {

    for ( int i = 0; i < n; i++ )
    {
        for ( int j = i + 1; j < n; j++ )
        {
            if ( arr[i] + arr[j] == target )
            {
                return {i, j};
            }
        }
    }

    return {-1, -1};

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
