#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while( t-- )
    {
        int n;
        cin >> n;

        int ans = 0, even = 0, odd = 0;

        long long a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0)
                even++;
            else odd++;
        }

        ans = min(even, n - (n/2)) + min(odd, (n/2));

        cout << ans << endl;
    }


    return 0;
}

