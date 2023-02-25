//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2)
    {
        //Your code here
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        int n1 = s1.length();
        int n2 = s2.length();

        // Initialize output string with '0'
        string result(n1 + n2, '0');

        // Multiply s1 by each digit of s2 and add to result
        for (int i = 0; i < n2; i++)
        {
            int carry = 0;
            int digit = s2[i] - '0';

            for (int j = 0; j < n1; j++)
            {
                int num1 = s1[j] - '0';
                int num2 = digit * num1 + carry + (result[i + j] - '0');

                carry = num2 / 10;
                result[i + j] = (num2 % 10) + '0';
            }

            if (carry > 0)
            {
                result[i + n1] += carry;
            }
        }

        // Remove leading zeros
        while (result.length() > 1 && result.back() == '0')
        {
            result.pop_back();
        }

        // Reverse the result and return
        reverse(result.begin(), result.end());
        return result;
    }

};

//{ Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a>>b;
        Solution obj;
        cout<<obj.multiplyStrings(a,b)<<endl;
    }

}
// } Driver Code Ends
