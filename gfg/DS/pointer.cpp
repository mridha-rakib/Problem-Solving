#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x = 20;

    int* ptr = &x;

//    cout << *ptr << endl;

    *ptr = 100;
    cout << x << endl;

    cout << *ptr << endl;

    int **pt = &ptr;

    cout << **pt << endl;

    return 0;
}
