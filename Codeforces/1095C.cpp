#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// Function to print k numbers which are powers of two
// and whose sum is equal to n
void FindAllElements(ll n, ll k)
{
    // Initialising the sum with k
    ll sum = k;

    // Initialising an array A with k elements
    // and filling all elements with 1
    ll A[k];
    fill(A, A + k, 1);

    for (ll i = k - 1; i >= 0; --i)
    {

        // Iterating A[] from k-1 to 0
        while (sum + A[i] <= n)
        {

            // Update sum and A[i]
            // till sum + A[i] is less than equal to n
            sum += A[i];
            A[i] *= 2;
        }
    }

    // Impossible to find the combination
    if (sum != n)
    {
        cout << "NO";
    }

    // Possible solution is stored in A[]
    else
    {
        cout<<"YES"<<endl;
        for (int i = 0; i < k; ++i)
            cout << A[i] << ' ';

    }
}
int main()
{
    ll n,k;
    cin>>n>>k;
    FindAllElements(n,k);

    return 0;

}

