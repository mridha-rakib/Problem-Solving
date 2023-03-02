#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long int largestPrimeFactor(int N){
        // We will keep dividing N by 2 until it is no longer divisible by 2
        int c = 2;
        while (N > 1)
        {
            if (N % c == 0)
            {
                N = N / c;
            }
            else c++;
        }
        return c;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0;
}
