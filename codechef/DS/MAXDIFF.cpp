#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int w[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            sum += w[i];
        }
        // Sort the array in non-increasing order
        sort(w, w + n);

        int start=0,end=0;
        for(int i=0; i<k; i++)
        {
            start+=w[i];
            end+=w[n-1-i];
        }
        if(sum-2*start>2*end-sum)
        {
            cout<<sum-2*start<<endl;
        }
        else
        {
            cout<<2*end-sum<<endl;
        }
    }
    return 0;
}
