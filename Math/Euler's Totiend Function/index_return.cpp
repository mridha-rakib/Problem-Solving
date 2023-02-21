//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.count(complement)) {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }
    return {};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.twoSum(arr, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends

