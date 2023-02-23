#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool is_prime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    optimize();


    int n, m;
    cin >> n >> m;

    // Find the next prime number after n
    int next_prime = n + 1;
    while (!is_prime(next_prime)) next_prime++;


    if (next_prime == m)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

