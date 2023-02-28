#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        priority_queue<int, vector<int> greater<int>>pq;

        for(int i = 0; i < n; i++ )
        {
            int x;
            cin >> x;
            pq.push_back(x);
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<int>ans;

        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        reverse(ans.begin(), ans.end());

        for(int x : ans)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
