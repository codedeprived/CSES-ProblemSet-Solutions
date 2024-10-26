#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    int n;
    cin>>n;
    // for n = 3 , 000 , 111 , 101 ,,.... so on, so no of combination by 2^n ,
    ll ans = 1;
    for(int i = 0;  i<n ; i++)
    {
        // mod with 10e+9 + 7
        ans = (ans*2)%1000000007;
    }
    cout<<ans;
}