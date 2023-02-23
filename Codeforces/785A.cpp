#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;



    unordered_map<string, int> shapes =
    {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int sum = 0;
    for( int i = 0; i < n; i++ )
    {
        string shape;
        cin >> shape;
        sum += shapes[shape];
    }

    cout << sum << endl;

    return 0;
}
