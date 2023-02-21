#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    optimize();

    lli n;
    cin >> n;
    vector<lli> arr(n);

    int sum = 0, totalsum = 0;
    for( int i = 0; i < n-1; i++ ){
        cin >> arr[i];
        sum += arr[i];
    }

//    sort( arr.begin(), arr.end() );
    totalsum = n * (n + 1) / 2;

    cout << totalsum - sum << endl;

    return 0;
}

