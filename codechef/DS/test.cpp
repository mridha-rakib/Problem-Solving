#include <iostream>
using namespace std;

int main()
{
    int i = -5;
    while (i <= 5)
    {
        if (i >= 0)
            break;
        else{
            i++;
            continue;
        }
        cout << "GeeksCourse n";
    }

    return 0;
}
