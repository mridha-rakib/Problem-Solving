#include <bits/stdc++.h>
using namespace std;

int phi[1000001];

int init (int mxN)
{
    for (int i = 1; i <= mxN; i++)
    {
        phi[i] = i;
    }

    for (int i = 2; i <= mxN; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= mxN; j += i)
            {
                phi[j] /= i;
                phi[j] *= (i - 1);
            }
        }
    }
}
int main()
{

    init(1000000);

    int t, n;
    cin >> t;

    while (t --> 0) {
        cin >> n;
        cout << phi[n] << endl;
    }
    return 0;
}
