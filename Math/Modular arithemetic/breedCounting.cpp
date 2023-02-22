#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long


int main()
{
    optimize();
//    freopen("bcount.in", "r", stdin);
//    freopen("bcount.out", "w", stdout);

    int cow_num;
    int query_num;
    cin >> cow_num >> query_num;

    vector<int> holsteins(cow_num + 1);
    vector<int> guernseys(cow_num + 1);
    vector<int> jerseys(cow_num + 1);
    for (int c = 0; c < cow_num; c++)
    {
        holsteins[c + 1] = holsteins[c];
        guernseys[c + 1] = guernseys[c];
        jerseys[c + 1] = jerseys[c];

        int type;
        cin >> type;
        if (type == 1) holsteins[c + 1]++;
        else if (type == 2) guernseys[c + 1]++;
        else if (type == 3) jerseys[c + 1]++;
    }

    for (int q = 0; q < query_num; q++)
    {
        int start;
        int end;
        cin >> start >> end;
        cout << holsteins[end] - holsteins[start - 1] << ' '
             << guernseys[end] - guernseys[start - 1] << ' '
             << jerseys[end] - jerseys[start - 1] << '\n';
    }
}
