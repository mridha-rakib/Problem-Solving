//Bismillahir Rahmanir Rahim
///Link: https://practice.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1

#include<bits/stdc++.h>

using namespace std;

string maximumFrequency(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    for(int i=0; i<t; i++)
    {

        string s;
        getline(cin,s);


        cout << maximumFrequency(s) << endl;

    }

    return 0;
}




string maximumFrequency(string s)
{
    vector<string> word;
    string tmp;
    for( auto i : s )
    {
        if(isspace(i))
        {
            word.push_back(tmp);
            tmp.clear();
        }
        else
        {
            tmp+=i;
        }
    }
    word.push_back(tmp);

    map< string, int > cnter;
    int mxFrq = 0;

    for( auto u : word )
    {
        cnter[u]++;
        mxFrq = max( mxFrq, cnter[u] );
    }
    string ans;
    for( auto x : word )
    {
        if( cnter[x] == mxFrq )
        {
            ans = x;
            break;
        }
    }

    string p = ans + " " + to_string(mxFrq);
    return p;

}

