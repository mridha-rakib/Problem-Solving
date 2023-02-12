#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    map<string, int> scores;
    string goal;

    for( int i = 0; i < n; i++ )
    {
        cin >> goal;
        scores[goal]++;
    }

    string winning_team;
    int max_score = -1;

    for( auto score: scores )
    {
        if( score.second > max_score ){
            max_score = score.second;
            winning_team = score.first;
        }
    }

    cout << winning_team << endl;

    return 0;
}
