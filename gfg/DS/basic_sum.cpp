//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n)
{

    long long mx=LLONG_MIN;;
    long long mn=LLONG_MAX;



    for(int j=0; j<n; j++)
    {
        if(a[j]<mn)
        {
            mn=a[j];
        }
        if(a[j]>mx)
        {
            mx=a[j];
        }
    }
    return make_pair(mn, mx);
}
