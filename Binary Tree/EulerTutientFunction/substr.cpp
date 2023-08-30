#include<bits/stdc++.h>
using namespace std;

#define CHAR_RANGE 128

class Solution
{
public:
    string findLongestSubstring(string s, int k)
    {
        return searchLongestSubstring(s, s.size(), k);
    }

private:
    string searchLongestSubstring(string str, int n, int k)
    {
        int begin = 0, end = 0;
        unordered_set<char> distinctChars;
        int freq[CHAR_RANGE] = {0};

        for (int low = 0, high = 0; high < n; high++)
        {
            distinctChars.insert(str[high]);
            freq[str[high]]++;

            while (distinctChars.size() > k)
            {

                if (--freq[str[low]] == 0)
                {
                    cout << freq[str[low]] << endl;
                    cout << "DistinctChars erase: " << str[low] << endl;
                    char ch = distinctChars.erase(str[low]);

                }
                low++;

            }
            if (end - begin < high - low)
            {
                end = high;
                begin = low;
            }
        }
        return str.substr(begin, end - begin + 1);
    }
};

int main()
{
    Solution solution;

    string s = "aaabccc";
    int k = 2;

    string longestSubstr = solution.findLongestSubstring(s, k);



    cout << "Longest substring with at least " << k << " repeating characters: " << longestSubstr << std::endl;

    return 0;
}
