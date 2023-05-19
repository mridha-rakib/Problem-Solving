#include<bits/stdc++.h>
using namespace std;

vector<int>FindUnion( int arr1[], int arr2[], int n, int m )
{
    int i = 0, j = 0;
    vector < int > Union;

    while ( i < n && j < m )
    {
        if ( arr1[i] <= arr2[i])
        {
            if ( Union.size() == 0 || Union.back() != arr1[i] )
            {
                Union.push_back(arr1[i]);
            }

            i++;
        }
        else
        {
            if ( Union.size() == 0 || Union.back() != arr2[i] )
                Union.push_back(arr2[i]);
            j++;
        }
    }
}

int main()
{
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    vector < int > Union = FindUnion( arr1, arr2, n, m );

    for ( auto i : Union ) cout << i << " ";
    cout << endl;

    return 0;
}
