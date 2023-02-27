#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long

int main()
{
    optimize();

    ll n, q;
    cin >> n >> q;

    int arr[n];
    for( int i = 0; i < n; i++ ) cin >> arr[i];

    while( q-- )
    {
        int a, b;
        cin >> a >> b;

        int minVal = *min_element(arr+a-1, arr+b);
        cout << minVal << endl;
    }

    return 0;
}
