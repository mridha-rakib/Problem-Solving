#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long

int main()
{
    optimize();

    ll n;
    cin >> n;

    vector<ll> data(n);
    for( ll i = 0; i < n; i++ )
    {
        cin >> data[i];
    }

    sort( data.begin(), data.end() );

    ll sz = unique(data.begin(), data.end()) - data.begin();

    cout << sz << endl;



    return 0;
}
