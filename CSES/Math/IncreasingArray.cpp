#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    optimize();

    lli n;
    cin >> n;

    vector<lli> arr(n);
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    lli moves = 0;
    for (lli i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
            moves += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << moves << endl;
    return 0;
}
