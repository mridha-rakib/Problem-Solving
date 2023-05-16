#include<bits/stdc++.h>
using namespace std;

int findLISLength ( vector<int> const & input )
{
    if ( input.size() == 0 )
        return 0;

    set<int>s;

    for ( int i = 0; i < input.size(); i++ )
    {
        if ( s.find(input[i]) != s.end())
        {
            continue;
        }


        auto ret = s.insert( input[i]);

        set <int> :: iterator it;

        if ( ret.second )
        {
            it = ret.first;
        }



    }

    return s.size();
}

int main()
{

    vector<int> input = { 2, 6, 3, 4, 1, 2, 9, 5, 8 };

    cout << "The length of the LIS is " << findLISLength(input);

    return 0;
}
