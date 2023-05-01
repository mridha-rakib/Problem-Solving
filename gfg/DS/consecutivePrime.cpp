#include<bits/stdc++.h>
using namespace std;

const int maxp = 20, n = 10000;
int prime[maxp], total = 0;

bool isprime(int k)
{
    cout << prime[10] << " p " <<endl;
    for ( int i = 0; i < total; i++ ){

        if ( k % prime[i] == 0 )
            return false;
    }
    return true;
}


int main()
{

    for ( int i = 2; i <= n; i++ )
    {
        if ( isprime(2) )
            prime[total++] = 2;
    }

    prime[total] = n + 1;

    int m;
    cin >> m;
    while ( m )
    {
        int ans = 0;
        for ( int i = 0; m >= prime[i]; i++ )
        {
            int cnt = 0;

            for ( int j = i; j < total && cnt < m; j++ )
                cnt += prime[j];
            if ( cnt == m )
                ++ans;
        }
        cout << ans << endl;
        cin >> m;
    }


    return 0;
}
