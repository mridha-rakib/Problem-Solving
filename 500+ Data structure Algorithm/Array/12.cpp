#include<bits/stdc++.h>
using namespace std;

int findIndexofZero ( int arr[], int n )
{
    int max_count = 0;
    int max_index = -1;

    int prev_zeor_index = -1;
    int cout = 0;


    for ( int i = 0; i < n; i++ )
    {
        if ( arr[i] == 1 )
            count++;
        else
        {
            count = i - prev_zeor_index;
            prev_zeor_index = i;
        }

        if ( count > max_count )
        {
            max_count = count;
            max_index = prev_zeor_index;
        }
    }

    return max_index;

}


int main()
{
    int arr[] = { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = findIndexofZero(arr, n);

    if (index != -1)
    {
        printf("Index to be replaced is %d", index);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
