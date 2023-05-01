#include<bits/stdc++.h>
using namespace std;

int findDuplicate( vector < int > const &nums )
{
    int n = nums.size();

    vector <bool> visited(n + 1);

    for ( int i : nums )
    {
        if ( visited[i] )
            return i;
        visited[i] = true;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 4, 2};

    cout << "The duplicate element is : " << findDuplicate( nums ) << endl;

    return 0;
}
