//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {

        // Your code here
        long long sum = 0; // initialize the total sum
        long long left_sum = 0; // initialize the left sum as 0

        // Calculate the total sum of the array
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        // Iterate through the array and check if the current element is the equilibrium point
        for (int i = 0; i < n; i++) {
            // If the left sum equals the right sum, then we have found the equilibrium point
            if (left_sum == sum - left_sum - a[i]) {
                return i+1; // Return the index of the equilibrium point (1-indexed)
            }
            left_sum += a[i]; // Add the current element to the left sum
        }

        // If we reach here, there is no equilibrium point in the array
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;

    //taking testcases
    cin >> t;

    while (t--) {
        long long n;

        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
