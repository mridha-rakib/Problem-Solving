#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t-->0)
    {
        int n;
        cin >> n;

        vector<string> first_name(n);
        vector<string> last_name(n);

        for(int i = 0; i < n; i++)
        {
            cin>> first_name[i] >> last_name[i];
        }

        map<string, int> count_map;
        for(int i = 0; i < n; i++)
        {
            count_map[first_name[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            if(count_map[first_name[i]] == 1)
                cout << first_name[i] << endl;
            else cout <<first_name[i] << " " << last_name[i] << endl;
        }
    }

    return 0;
}

