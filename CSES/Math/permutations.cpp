#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define pb push_back

int main()
{
    optimize();
    int n;
    cin >> n;

    if( n == 1 )
    {
        cout << 1 << endl;
        return 0;
    }
    else if( n < 4 )
        cout << "NO SOLUTION" << endl;

    else
    {
        vector<int>perm;

        for( int i = 2; i <= n; i+=2 )
            perm.push_back(i);


        for( int i = 1; i <= n; i+=2 )
            perm.push_back(i);

        if(!n & 1)
            perm.push_back(n);

        for( int i = 0; i < n; i++ )
            cout << perm[i] << " ";

        cout << endl;
    }
    return 0;
}
