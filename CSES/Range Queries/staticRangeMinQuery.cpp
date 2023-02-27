#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long

const int MAXN = 1e5 + 5;

int arr[MAXN];
int tree[4*MAXN];

void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2*node, start, mid);
    build(2*node+1, mid+1, end);
    tree[node] = min(tree[2*node], tree[2*node+1]);
}

int query(int node, int start, int end, int l, int r)
{
    if(start > r || end < l)
        return INT_MAX;
    if(start >= l && end <= r)
        return tree[node];
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return min(p1, p2);
}

int main()
{
    optimize();

    int n, q;
    cin >> n >> q;

    for( int i = 0; i < n; i++ )
        cin >> arr[i];

    build(1, 0, n-1);

    while( q-- )
    {
        int a, b;
        cin >> a >> b;

        int minVal = query(1, 0, n-1, a-1, b-1);
        cout << minVal << endl;
    }

    return 0;
}
