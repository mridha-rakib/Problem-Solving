///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;


char s[123456];
char dir[42];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int i=0,j=0;
    char n;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./",str;
    cin>>n;
    cin>>str;
    if(n=='L')
    {
        while(str[i]!='\0')
        {
            j=0;
            while(s[j]!='\0')
            {
                if(str[i]==s[j])
                {
                    cout<<s[j+1];
                }
                j++;
            }
            i++;
        }
    }
    else if(n=='R')
    {
        while(str[i]!='\0')
        {
            j=0;
            while(s[j]!='\0')
            {
                if(str[i]==s[j])
                {
                    cout<<s[j-1];
                }
                j++;
            }
            i++;
        }
    }

    return 0;
}
