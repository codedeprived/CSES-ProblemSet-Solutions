#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int main()
{

    ll n;

    cin>>n;
    ll sum  = 0;
    for(int i = 0; i<(n-1); i++)
    {
        ll input;
        cin>>input;
        sum+=input;
    }

    ll totalSum = n*(n+1)/2;
    cout<<totalSum - sum;
  
}