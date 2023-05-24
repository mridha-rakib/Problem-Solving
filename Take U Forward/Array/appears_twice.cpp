#include<bits/stdc++.h>
using namespace std;

int FindSingleELement ( vector<int>& arr )
{
    int n = arr.size();

    for ( int i = 0; i < n; i++ )
    {
        int cnt = 0;
        int nums = arr[i];
        for ( int j = 0; j < n; j++ )
        {
            if ( arr[j] == nums ) cnt++;
        }

        if ( cnt == 1)
            return arr[i];
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for ( int i = 0; i < n; i++ ) cin >> arr[i];

    cout << FindSingleELement( arr ) << endl;

    return 0;
}
