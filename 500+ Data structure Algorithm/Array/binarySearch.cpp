//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	string find(vector<int>nums, int target) {
	    // Code here

	  int lo = 0, hi = nums.size() - 1;

	  while ( lo <= hi )
	  {
	      int mid = (hi + lo) / 2;

	      if ( nums[mid] == target )
	           return "Yes";
	      else if ( nums[mid] < target )
	            lo = mid + 1;
	      else hi = mid - 1;

	  }

	  return "No";
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, target;
		cin >> n >> target;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		sort(nums.begin(), nums.end());
		Solution ob;
		string ans = ob.find(nums, target);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
