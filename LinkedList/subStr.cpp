/** In my PHP code, I get the correct output in my compiler, but this online judge cannot accept it.
  * However, the C++ code is accepted by this compiler.
*/

#include<bits/stdc++.h>
using namespace std;

int countOccurrences(const string& mainStr, const string& subStr)
{
    int count = 0;
    size_t pos = mainStr.find(subStr);

    while (pos != std::string::npos)
    {
        count++;
        pos = mainStr.find(subStr, pos + 1);
    }

    return count;
}

int main()
{
    string mainStr, subStr;

    cin >>mainStr;
    cin >> subStr;

    cout << countOccurrences(mainStr, subStr) << endl;

    return 0;
}
