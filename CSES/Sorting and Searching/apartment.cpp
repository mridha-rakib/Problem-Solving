#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long

int main()
{
    optimize();

    ll m, n, k;
    cin >> m >> n >> k;

    vector<int>applicant(n);
    vector< int > apartment(m);

    for( int i = 0; i < n; i++ ) cin >> applicant[i];

    for( int i = 0; i < m; i++ ) cin >> apartment[i];

    sort(applicant.begin(), applicant.end());
    sort(apartment.begin(), apartment.end());


    int i = 0, j = 0, count = 0;

    while( i < n && j < m )
    {
        if( abs (applicant[i] - apartment[j]) <= k )
        {
            count++, i++, j++;
        }
        else if( applicant[i] - apartment [j] < k ) {i++, j++;}
        else j++;
    }

    cout << count << endl;

    return 0;
}
