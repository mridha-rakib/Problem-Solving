#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MXN = 1e8+5;

vector<bool> isPrime((MXN>>1)+1,true);
vector<int>primes;

void sieve(int n)
{
    int sqrtN = sqrt(n);
    for (int i = 3; i <= sqrtN; i += 2)
    {
        if ( isPrime[i>>1])
        {
            for (int j = i * i; j <= n; j += (2 * i))
            {
                isPrime[j>>1] = false;
            }
        }
    }

    primes.push_back(2);
    for ( int i = 3; i <= n; i += 2 )
    {
        if (isPrime[i>>1]) primes.push_back(i);
    }

}

void segmentedSieve(int n) {
    int sqrtN = sqrt(n);
    int segmentSize = sqrtN;
    sieve(sqrtN);
    int low = segmentSize;
    int high = min(segmentSize*2-1, n);
    while (low <= n) {
        vector<bool> segment(segmentSize, true);
        for (int p : primes) {
            int sp = (low + p - 1) / p;
            int j = max(sp, p) * p - low;
            for (; j < segmentSize; j += p) {
                segment[j] = false;
            }
        }
        for (int i = 0; i < segmentSize && low + i <= n; i++) {
            if (segment[i]) {
                primes.push_back(low + i);
            }
        }
        low += segmentSize;
        high += segmentSize;
        high = min(high, n);
    }
}

void Solve( int n )
{
    int cnt = 0;
    int i = 0;
    while (primes[i] <= n)
    {
        cnt++;
        i++;
    }

    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        if (n >= MXN) {
            segmentedSieve(n);
        }
        Solve(n);
    }

    return 0;
}
