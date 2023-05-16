#include<bits/stdc++.h>
using namespace std;

class test
{
private :
    int x;
public:
    void setX( int x )
    {
        this -> x = x;
    }

    void print()
    {
        cout << "X = " << x << endl;
    }
};

int main()
{
    test obj;
    int x = 20;
    obj.setX( x );
    obj.print();


    return 0;
}
