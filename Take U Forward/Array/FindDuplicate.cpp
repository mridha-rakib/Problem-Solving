#include<bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_set<int>seen;
    for ( int i = 0; i < n; i++ )
    {
        if ( seen.count( arr[i] ) > 0 )
            return arr[i];
        seen.insert( arr[i] );
    }

    return -1;
}


int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);

    for ( int i = 0; i < n; i++ ) cin >> arr[i];
    cout << findDuplicate ( arr, n );

    return 0;
}
