#include<bits/stdc++.h>
using namespace std;

struct node
{

    string str;
    int num;
    double doub;
    char x;

    node(string str_, int num_, double doub_, char x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

int main()
{

//    {string, int, double, char}

    // wrong way of defining
//    node raj;
//    raj.str = "Striver";
//    raj.num = 90;
//    raj.doub = 90.5;

    // right way of definig

    node raj = new node ("rakib", 419. 3.66, "");


    return 0;
}
