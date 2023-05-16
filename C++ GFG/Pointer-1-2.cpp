#include<bits/stdc++.h>
using namespace std;

class test
{
private:
    int x;
    int y;
public:
    test ( int x = 0, int y = 0 )
    {
        this -> x = x;
        this -> y = y;
    }

    test &setX( int a )
    {
        x = a;
        return *this;
    }
    test &setY( int b )
    {
        y = b;
        return *this;
    }

    void print()
    {
        cout << "x = " << x << "y = " << y << endl;
    }
};


int main()
{

    test obj1( 5, 5);
    obj1.setX( 10 ).setY( 20 );
    obj1.print();

    return 0;
}
