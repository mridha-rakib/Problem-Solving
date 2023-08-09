//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>>pr;
        for (int i = 0; i < n; i++)
        {
            pr.push_back({start[i], end[i]});
        }
        sort(pr.begin(), pr.end(), cmp);
        int mxCnt = 1;
        int d = pr[0].second;

        for (int i = 1; i < n; i++)
        {
            if (v[i].first > d)
            {
                mxCnt++;
                d = v[i].second;
            }
        }
        return mxCnt;
    }
private:
    static bool cmp(const pair<int, int>&a, pair<int, int>&b)
    {
        return a.second < b.second;
    }
    void printVector(const vector<pair<int, int>>& v)
    {
        for (const auto& p : v)
        {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
    }
};

//{ Driver Code Starts.
int main()
{
    Solution s;
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);
    int maxMeetings = s.maxMeetings(start, end, n);
    return 0;
}
// } Driver Code Ends
