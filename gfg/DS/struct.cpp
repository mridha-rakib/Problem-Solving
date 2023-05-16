#include<bits/stdc++.h>
using namespace std;

struct mystruct {
    int age;
    double height;
};

int main()
{
    struct mystruct s1;

    s1.age = 23;
    s1.height = 7.5;

    struct mystruct *ps1;
    ps1 = &s1;
    ps1 -> age = 34;
    ps1 -> height = 5.5;

    cout << ps1->age << endl;
    cout << ps1->height << endl;


    return 0;
}
