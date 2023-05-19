#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersectionOfArrays(vector<int>& nums1, vector<int>& nums2)
    {

        int n = nums1.size();
        int m = nums2.size();

        vector<int>ans;
        vector <int> visited(nums2.size(), 0);

        int i = 0, j = 0;
        for ( i = 0; i < n; i++ )
        {
            for ( j = 0; j < m; j++ )
            {
                if (  nums1[i] == nums2[j] && visited[j] == 0 )
                {
                    ans.push_back( nums2[j] );
                    visited[j] = 1;
                    break;
                }
                else if ( nums2[j] > nums1[i] )
                    break;
            }
        }
        return ans;
    }
};

int main()
{

    vector < int > A {1,2,2,1};
    vector < int > B {2,2};

    Solution ob;

    vector<int> ans = ob.intersectionOfArrays(A,B);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }


    return 0;
}
