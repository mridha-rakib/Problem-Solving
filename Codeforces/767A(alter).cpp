/*                  In the name of Allah                        */



#include<iostream> //For my Machine
//#include<bits/stdc++.h> //For Contest
using namespace std;

typedef long long int ll;
#define pb     push_back
#define ppb    pop_back
#define yes    cout << "Yes" << endl
#define no     cout << "No" << endl
#define Yes    cout << "YES" << endl
#define No     cout << "NO" << endl

const int maxsize= 1e7+1;
/*
int power(int b,int e)
{
    if(e==0)
        return 1;
    if(e&1)
        return b*power(b*b,e/2);
    return power(b*b,e/2);
}



// To find GCD of 2 Numbers
ll gcd(ll a, ll b)
{
    if (b==0)
        return a;

    return gcd(b,a%b);
}
// Similar builtin Function: __gcd(a,b)



// To find LCD of 2 Numbers
ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}



// Function of Binary Search
ll binary_search(vector <ll> &arr, ll f_num)
{
    ll lo = 0, hi = arr.size()-1;
    int flag= 0;
    while(hi-lo>=0)
    {
        int mid = (lo+hi)/2;
        if(arr[mid]==f_num)
        {
            //cout << "found" << nl;
            flag = 1;
            break;
        }

        else if(arr[mid] < f_num)
            lo = mid+1;

        else
            hi = mid-1;
    }
    return flag;
}



// Function to find lower boundary
ll lower_bound(vector <ll> &arr, ll element)
{
    ll i, j, mid;
    ll hi, lo;
    lo = -1;
    hi = arr.size();
    while(hi-lo > 1)
    {
        mid = lo + (hi-lo)/2;
        //l < x && hi >= x
        if(arr[mid] >= element) hi = mid;
        else lo = mid;
    }
    return hi;
}


// Function to find upper boundary
ll upper_bound(vector <ll> &arr, ll element)
{
    ll i, j, mid;
    ll hi, lo;
    lo = -1;
    hi = arr.size();
    while(hi-lo > 1)
    {
        mid = lo + (hi-lo)/2;
        //l < x && hi > x
        if(arr[mid] > element) hi = mid;
        else lo = mid;
    }
    return hi;
}



// Function to check a number is Prime or Not
bool isprime(ll n)
{
    if (n<=1)
        return false;
    if(n<=3)
        return true;

    if( (n%2 == 0) || (n%3 == 0) )
        return false;

    for(ll i= 5; i*i<=n; i= i+6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}



// Count how many digit in a Number, n
// Similar builtin function: floor(log10(n))+1;



*/


ll sumofdigits(ll n)
{
    ll s=0,rem=0;
    while(n>0)
    {
        rem=n%10;
        s+=rem;
        n=n/10;
    }
    return s;
}




//        Author: Sorowar Mahabub


int main()
{
    ll n;
    cin >> n;
    ll decreasing_n= n; // to save highest value (n)
    ll misty[maxsize], visit[maxsize];
    for(ll i= 1; i<=n; i++)
        cin >> misty[i];

    for(ll i= 1; i<=n; i++)
    {
        visit[ misty[i] ]= 1; // to save to print max(n) & later max(n--) & so on
        while(visit[decreasing_n])
        {
            cout << decreasing_n << " ";
            decreasing_n--; // max(n) will be decreasing
        }
        cout << endl; // if max(n) not found, print a new line
    }

    return 0;
}
