#include<bits/stdc++.h>
using namespace std;

struct edge
{

    int src, dest;
};


class Graph
{
public:
    vector<vector<int>>adjlist;

    Graph ( vector<edge>const &edges, int n )
    {
        adjlist.resize(n);

        for ( auto &edg : edges )
        {
            adjlist[edge.src].push_back(edg.dest);
            adjlist[edge.dest].push_back(edg.src);
        }
    }

};


void recursiveBFS ( Graph const &graph, queue <int > &q, vector<bool>&discovered)
{
    if ( q.empty() )
        return;

    int v = q.front();
    q.pop();
    cout << v << " ";

    for ( int u : graph.adjList[v] )
    {
        if ( !discovered[u] )
        {
            discovered[u] = true;
            q.push( u );
        }
    }

    recursiveBFS( graph, q, discovered );
}


int main()
{

    vector<edge>edges =
    {
        {1, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {5, 9},
        {5, 10}, {4, 7}, {4, 8}, {7, 11}, {7, 12}
    };

    int  n = 15;

    /// Build a graph from the given edges.
    Graph graph(edges, n);

    vector<bool> discovered(n, false);

    queue<int>q;

    for ( int i = 0; i < n; i++ )
    {
        if ( !discovered[i] )
        {
            discovered[i] = true;
            q.push(i);

            recursiveBFS(graph, q, discovered);
        }
    }

    return 0;
}
