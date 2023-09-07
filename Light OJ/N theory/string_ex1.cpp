#include<bits/stdc++.h>
using namespace std;
bool areRotations(string s1,string s2)
{
    // Your code here
    int n = s1.size();
    int m = s2.size();
    if (n != m) return false;
    string temp = s1 + s1;

    for (int i = 0; i < n; i++)
    {
        bool isRotation = true;
        for (int j = 0; j < n; j++)
        {
            cout << temp[i + j] << " " << s2[j] << endl;
            if (temp[i + j] != s2[j])
            {
                isRotation = false;
                break;
            }
        }
        if (isRotation) return true;
    }
    return false;
}
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout << areRotations(s1, s2) << endl;
    return 0;
}
