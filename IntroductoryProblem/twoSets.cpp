#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    
    ll n;
    cin>>n;

    ll sum = (n*(n+1)/2);
    if(sum%2== 0)
    {
        sum/=2;
        cout<<"YES"<<endl;
        vector<int> set1;
        vector<int> set2;

    for(ll i = n; i>0; i--)
    {
        if(sum >= i)
        {
            sum -= i;
            set1.push_back(i);
        }
        else
        {
            set2.push_back(i);
        }
    }
    cout<<set1.size()<<endl;
    for(ll i = 0;  i<set1.size() ; i++)
    {
        cout<<set1[i]<<" ";
    }
    cout<<endl;
    cout<<set2.size()<<endl;
    for(int i = 0 ; i<set2.size() ; i++)
    {
        cout<<set2[i]<<" ";
    }


    }
    else{
        cout<<"NO"<<endl;
    }
    


}