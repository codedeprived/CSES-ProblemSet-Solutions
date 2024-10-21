#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    ll t ;
    cin>>t;
    while(t--){
    ll y  ,x , ans;

  cin>>y>>x;
  if(y<x)
    {
        if(x%2 == 0)
        {
            ans = x*x - (x-1) - (x-y);
        }
        else
        {
            ans = x*x - (x-1) + (x-y);
        }
    }
    else
    {
        if(y%2 == 0)
        {
            ans = y*y - (y-1) + (y-x);
        }
        else
        {
            ans = y*y - (y-1) - (y-x);
        }
    }
    cout<<ans<<endl;
    
    }
}