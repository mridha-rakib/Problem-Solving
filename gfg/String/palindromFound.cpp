#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string longestPalindrome(string s)
{
    string longest = "";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j <= s.length(); j++)
        {
            string sub = s.substr(i, j - i);
            if (isPalindrome(sub) && sub.length() > longest.length())
            {
                longest = sub;
            }
        }
    }
    return longest;
}

int main()
{
    string s;
    cin >> s;
    string longest = longestPalindrome(s);
    cout << "The longest palindrome in '" << s << "' is: " << longest << endl;
    return 0;
}
