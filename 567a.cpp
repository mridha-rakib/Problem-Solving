#include <bits/stdc++.h>
using namespace std;

#define PB push_back
#define MP make_pair
#define SZ size()
#define all(v) v.begin(), v.end()
#define REP(i, n) for(int i = 0; i < (int)n; i++)
#define ITR(i, j, n) for(int i = j; i < (int)n; i++)
#define mem(array, val) memset(array, val, sizeof(array))
#define READ(filename) freopen(filename, "r", stdin)
#define WRITE(filename) freopen(filename, "w", stdout)
#define Pii pair <int, int>
#define Fr first
#define Sc second
#define Long long long
#define si(a) scanf("%d", &a)
#define sl(a) scanf("%I64d", &a)
#define sd(a) scanf("%lf", &a)
#define sii(a, b) scanf("%d%d", &a, &b)
#define sll(a, b) scanf("%I64d%I64d", &a, &b)
#define sdd(a, b) scanf("%lf%lf", &a, &b)
#define Fast_IO ios_base::sync_with_stdio(0);cin.tie(0)

#define MAX 100005

int main()
{
   int N, ara[MAX];
   si(N);
   REP(i, N) si(ara[i]);

   REP(i, N) {
      int mx = 0, mi = 2000000007;
      if(i) mx = max(ara[i] - ara[0], mx), mi = min(mi, ara[i] - ara[i-1]);
      if(i < N-1) mx = max(mx, ara[N-1] - ara[i]), mi = min(mi, ara[i+1] - ara[i]);
      printf("%d %d\n", mi, mx);
   }

   return 0;
}
