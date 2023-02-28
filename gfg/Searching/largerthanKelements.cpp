#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void printKlargervalue(vector<lli>arr, lli n, lli k)
{
    sort(arr.begin(), arr.end());

    lli idx = lower_bound(arr.begin(), arr.end(), k + 1) - arr.begin();

    vector<lli>ans;
    for( int i = idx; i < n; i++)
    {
       ans.push_back(arr[i]);
    }

    reverse(ans.begin(), ans.end());

    for(auto i : ans)
        cout << i << " ";
    cout << endl;

}

int main()
{
    optimize();
    int t;
    cin >> t;
    while( t-- )
    {
        lli n, k;
        cin >> n >> k;

        vector<lli> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        printKlargervalue(arr, n, k);
    }


    return 0;
}
