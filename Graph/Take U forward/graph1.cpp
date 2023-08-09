#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 123;
vector <pair <int, int>> adjList[mx];

int main()
{

    int n, m;
    cin >> n >> m;

    for ( int i = 1; i <= m; i++ )
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    for ( int i = 1; i <= n; i++ )
    {
        cout <<"Adj list of I: " << i <<": " << endl;
        for ( auto j : adjList[i] ) cout << "Node : " << j.first << " And weight : " << j.second << endl;
    }


    return 0;
}
