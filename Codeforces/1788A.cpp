#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i] - 1;
        }

        if( sum % 2 == 1)
        {
            cout << -1 << endl;
            return 0;
        }

        int s = 0;

        for( int i = 1; i < n - 1; i++ )
        {
            s += a[ i - 1 ] - 1;

            if( s == sum / 2 )
            {
                cout << i << endl;
                return 0;
            }
        }

    }

}
