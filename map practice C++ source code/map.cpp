#include<bits/stdc++.h>
using namespace std;

map < pair <int, int>, int> mm;

int main()

{

    int q;

    scanf("%d", &q);

    while(q--)
    {
        pair <int, int> pp;

        scanf("%d %d", &pp.first, &pp.second);
        int ans = 0;

        if( mm[pp] == 1 )ans = 1;
        else
        {
            ans = 0;
            mm[pp] = 1;
        }

        cout << ans << endl;
    }

    return 0;
}
