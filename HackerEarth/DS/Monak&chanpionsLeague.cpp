#include<bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    priority_queue<int> q;

    int arr[n];

    for ( int i = 0; i < m; i++ )
    {
        int x;
        cin >> x;
        q.push(x);
    }

    long long ans = 0;
    for ( int i = 0; i < n; i++ )
    {
        if( !q.empty())
        {
            int a = q.top();
            q.pop();

            ans += a;

            a--;
            if( a > 0)
                q.push(a);
        }
    }

    cout << ans << endl;

    return 0;
}
