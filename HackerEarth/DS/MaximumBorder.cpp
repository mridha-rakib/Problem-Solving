#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    while( t-- )
    {
        int n, m;
        cin >> n >> m;

        char arr[n][m];

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '#')
                    count++;
                else continue;
            }

           ans = max(ans, count);
           count = 0;
        }

        cout << ans << endl;
    }


    return 0;
}
