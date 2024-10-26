#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    long  a , b;
    cin>>a>>b;

    int MIN = min(a,b);
    int MAX = max(a,b);

    if(MIN*2 < MAX)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if((MIN+MAX)%3 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


   }
}