//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int>v;
        deque<int>q;
        int i;
        for(i=0; i<k; i++)
        {
            while(!q.empty()&&arr[i]>arr[q.back()])
            {
                q.pop_back();
            }

            q.push_back(i);
        }

//        deque<int>:: iterator it;
//
//        for ( it = q.begin(); it != q.end(); it++ )
//            cout << *it << " it" << endl;

        //for(;i<n;i++)//or
        for(int i=k; i<n; i++)
        {
            v.emplace_back(arr[q.front()]);
            //remove element which is not a part of the window
            while(!q.empty()&&(q.front()<=i-k))
            {
                q.pop_front();
            }
            //remove the ele which is not essential
            while(!q.empty()&&(arr[i]>=arr[q.back()]))
            {
                q.pop_back();
            }
            //add the element
            q.push_back(i);
        }
        v.emplace_back(arr[q.front()]);
        return v;
    }

};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while(t--)
    {

        int n, k;
        cin >> n >> k;

        int arr[n];
        for(int i = 0; i<n; i++)
            cin >> arr[i];
        Solution ob;
        vector <int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout << endl;

    }

    return 0;
}
// } Driver Code Ends
