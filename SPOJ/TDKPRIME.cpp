#include<bits/stdc++.h>
#include <limits.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

using ll = long long;
const int MAXN = 1e8+5;
vector <bool> isPrime(MAXN,true);    //isPrime[i] = 0 indicates i is prime.
vector<int> primes;

void sieve()
{
    //if even check itself while calling. This function will only tells wether a number is prime or not(not for even numbers).

   isPrime[0] = isPrime[1] = false;

   for ( ll i = 4; i <= MAXN; i += 2 )
   {
        isPrime[i] = false;
   }

   for ( ll i = 3; i * i <= MAXN; i += 2 )
   {
       if ( isPrime[i] )
       {
           for ( ll j = i * i; j <= MAXN; j += (2 * i))
           {
               isPrime[j] = false;
           }
       }
   }

   primes.push_back(2);

   for ( ll i = 3; i <= MAXN; i += 2)
   {
       if ( isPrime[i]) primes.push_back(i);
   }

}

int main()
{
    optimize();
    sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<primes[n-1]<<"\n";
    }


    return 0;
}
