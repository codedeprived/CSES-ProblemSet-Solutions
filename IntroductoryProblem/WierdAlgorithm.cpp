#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define ld long double


int main()
{
 ll input ; 
 cin>>input;

    vector<ll> ans;

    while(input != 1)
    {
        if(input%2 == 0)
        {
            ans.push_back(input);
            input/=2;
        }
        else 
        {
            ans.push_back(input);
            input = input*3 + 1;
        }
    }
    ans.push_back(1);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
}