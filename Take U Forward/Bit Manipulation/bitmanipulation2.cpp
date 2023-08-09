#include<bits/stdc++.h>
using namespace std;

vector<int> findUniqueElements(int array[], int n)
{
    int bitmask = 0;
    for (int i = 0; i < n; i++)
    {
        bitmask ^= array[i];
    }
    cout << bitmask << endl;
    int setBit = bitmask & -bitmask;

    cout <<"Set Bit " << setBit << endl;
    int unique1 = 0, unique2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((array[i] & setBit) != 0)
        {
            cout << "arrya : " << array[i] << endl;
            unique1 ^= array[i];
        }
        else
        {
            unique2 ^= array[i];
        }
    }

    return {unique1, unique2};
}

int main()
{
    int array[] = {1, 2, 2, 1, 3, 5, 7, 3, 4, 4};
    int n = sizeof(array) / sizeof(array[0]);

    vector<int> uniqueElements = findUniqueElements(array, n);

    for (int element : uniqueElements)
    {
        cout << element << " ";
    }


    return 0;
}
