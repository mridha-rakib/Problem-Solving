#include<bits/stdc++.h>
using namespace std;


int main()
{

    int arr[] = {4, 7, 1, 2, 8, 10, 3};
    int n = sizeof( arr ) / sizeof( arr[0] );

    sort ( arr, arr + n );

    int mx_cnt = 0, cnt = 0;
    for (int i = 0; i < n; i++ )
    {
        if ( arr[i] == arr[i + 1]+=1 )
            cnt++;

        if ( cnt > mx_cnt )
        {
            mx_cnt = cnt;
            cnt = 0;
        }

    }

    cout << cnt << endl;


    return 0;
}
