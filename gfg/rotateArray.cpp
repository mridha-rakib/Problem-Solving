//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:

    //Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(int arr[], int d, int n){
        // code here

        reverse(arr, arr + d);
        // reverse the remaining n-d elements
        reverse(arr + d, arr + n);
        // reverse the entire array
        reverse(arr, arr + n);

    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;

	while(t--){
	    int n, d;

	    //input n and d
	    cin >> n >> d;

	    int arr[n];

	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);

	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends
