#include<bits/stdc++.h>
using namespace std;

int majorityElement( vector<int> arr )
{
    int n = arr.size();
    for ( int i = 0; i < n; i++ )
    {
        int count = 0;

        for ( int j = 0; j < n; j++ )
        {
            if ( arr[i] == arr[j] )
            {
                count++;
            }
        }
        if ( count > (n / 2)) return arr[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;


    return 0;
}
