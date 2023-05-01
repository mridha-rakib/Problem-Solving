#include<bits/stdc++.h>
using namespace std;


#define MAX 100

void ArrayElement(int arr1[], int st, int l);

int main()
{
    int arr1[MAX];
    int n, i;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf(" element - %d : ",i);
        scanf("%d",&arr1[i]);
    }


    ArrayElement(arr1, 0, n);//call the function ArrayElement
    printf("\n\n");

    return 0;
}


void ArrayElement( int arr[], int cp, int l )
{

    if ( cp >= l )
        return;

    cout << arr[cp] << " ";

    ArrayElement( arr, cp + 1, l );
}
