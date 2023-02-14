#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>vec(n);

    for( int i = 1; i <= n; i++ )cin >> vec[i];

    int p[ n + 1 ];

    p[0] = 0;
    for( int i = 1; i <= n; i++ )
    {
        p[i] = p[i - 1] + vec[i];
    }

    int l, r;
    cin >> l >> r;
    cout << p[4] << endl;


    return 0;
}
