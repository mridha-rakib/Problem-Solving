#include<bits/stdc++.h>
using namespace std;
#define m 1000010
#define ll long long

long long int primes[m], cnt = 0, siv[m];

ll divisorsCount(ll num) {
    ll ans = 1;
    for (int i = 0; primes[i] * primes[i] <= num; i++) {
        if (num % primes[i] == 0) {
            ll cnt = 0;
            while (num % primes[i] == 0) {
                cnt++;
                num /= primes[i];
            }
            ans *= cnt + 1;
        }
    }
    if (num > 1) {
        ans *= 2;
    }
    return ans;
}

void sieve() {
    ll i, j;
    for (i = 3; i < m; i++) {
        if (!siv[i]) {
            for (j = i * i; j < m; j += i) {
                siv[j] = 1;
            }
        }
    }

    primes[cnt++] = 2;
    for (i = 3; i < m; i += 2) {
        if (!siv[i]) primes[cnt++] = i;
    }
    return;
}

int main() {
    sieve();
    int t;
    scanf("%d", &t);

    for (int cs = 1; cs <= t; cs++) {
        ll num;
        scanf("%lld", &num);
        ll totalDivisorsCnt = divisorsCount(num);

        printf("Case %d: %lld\n", cs, totalDivisorsCnt - 1);
    }

    return 0;
}
