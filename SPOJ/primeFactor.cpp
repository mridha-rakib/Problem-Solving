#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MXN = 1e8+5;

vector <bool> isPrime(MXN,true);
vector<int>primes;

void sieve()
{
    for ( int i = 3; i * i <= MXN; i += 2)
    {
        if ( isPrime[i])
        {
            for (int j = i * i; j <= MXN; j += (2 * i))
            {
                isPrime[j] = false;
            }
        }
    }

    primes.push_back(2);
    for ( int i = 3; i <= MXN; i += 2 )
    {
        if (isPrime[i]) primes.push_back(i);
    }


    //for (int i = 0; i < 10; i++) cout << primes[i] <<" ";

}

void primeFactor( int n )
{
    vector<int>result;
    for ( int i = 0; primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            while (n % primes[i] == 0)
            {
                n = n / primes[i];
                result.push_back(primes[i]);
            }
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] <<" ";
    }
    cout << endl;
}

int main()
{

    sieve();

    int n;
    cin >> n;

    primeFactor(n);

    return 0;
}
