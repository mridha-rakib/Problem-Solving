#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MXN = 3001;

vector <bool> isPrime(MXN,true);
vector<int>primes;
vector<int>cntprimes(MXN, 0);

void sieve()
{
    isPrime[0] = isPrime[1] = 0;

    for ( int i = 2; i < MXN; i++)
    {
        if (isPrime[i])
        {
            cntprimes[i]++;
            for (int j = 2 * i; j < MXN; j += i)
            {
                isPrime[j] = 0;
                cntprimes[j]++;
            }
        }
    }

}

void solve()
{
    int n, cnt = 0;
    cin >> n;
    for ( int i = 2; i <= n; i++ )
    {
        if (cntprimes[i] == 2)
            cnt++;
    }
    cout << cnt << endl;
}


int main()
{
    sieve();
    int t;
    cin >> t;
    while ( t-- )
    {
        solve();
    }

    return 0;
}
