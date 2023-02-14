#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int k;
    cin >> k;

    vector<int>arr(12);

    for( int i = 0; i < 12; i++ )
        cin >> arr[i];

    sort( arr.begin(), arr.end(), greater<int>());


    int sum = 0, count = 0;

    if( k == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        for( int i = 0 ; i < arr.size(); i++ )
        {
            sum += arr[i];
            count++;

            if( sum >= k )
            {
                cout << count << endl;
                count = 0;
                break;
            }
        }
    }

    return 0;
}
