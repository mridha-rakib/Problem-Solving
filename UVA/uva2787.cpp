//#include<bits/stdc++.h>
//using namespace std;
//
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//
//
//int main()
//{
//    optimize();
//
//    int i, j, n, count, a[20];
//    cin>>a[0];
//    while(a[0]!=-1)
//    {
//        n=1;
//        for( ; ; n++)
//        {
//            cin>>a[n];
//            if (a[n]==0) break;
//        }
//        count=0;
//        for (i=0; i<n-1; i++)
//        {
//            for (j=i+1; j<n; j++)
//            {
//                if (a[i]*2==a[j] || a[j]*2==a[i])
//                    count++;
//            }
//        }
//        cout<<count<<endl;
//        cin>>a[0];
//    }
//
//
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int count_twice_elements(int v[], int n)
{
    if(n < 2) return 0;

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] * 2 == v[j] || v[j] * 2 == v[i])
                count++;
        }
    }

    return count;
}

int main()
{
    optimize();

    int i, j, n, count, a[20];
    cin >> a[0];

    while(a[0] != -1)
    {
        n = 1;
        for(;;n++)
        {
            cin >> a[n];
            if(a[n] == 0)break;
        }

        cout << count_twice_elements (a, n) << endl;
        cin >> a[0];
    }


    return 0;
}
