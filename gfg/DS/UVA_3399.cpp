#include <bits/stdc++.h>
using namespace std;

const int N = 10005;

int prime[N];
bool is_prime[N];

void sieve()
{
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            prime[i] = prime[i-1] + i;
            for (int j = i*i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
        else
        {
            prime[i] = prime[i-1];
        }
    }
}

int main()
{
    sieve();
    int n;
    while (cin >> n && n)
    {
        int ans = 0;
        for (int i = 1; i < N; i++)
        {
            if (prime[i] > n)
            {
                break;
            }
            if (is_prime[prime[i]-prime[i-1]])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

