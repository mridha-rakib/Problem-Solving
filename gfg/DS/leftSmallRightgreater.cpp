//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n)
{
    int mx = arr[0], re = -1, flag = 0, j = 0;
    for ( int i = 0; i < n; i++ )
    {
        if ( arr[i] >= mx && flag == 0 )
        {
            mx = arr[i];
            flag = 1;
            j = i;
            re = mx;
        }
        if ( flag == 1 && arr[i] < mx )
        {
            flag = 0;
            re = -1;
        }
    }

    if ( re == arr[n - 1] && j == n - 1 )
        return -1;
    return re;
}
