#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int main()
{
   ll n; 
   cin>>n;
   ll op = 0; 
   ll prev;
   for(int i = 0;  i<n ; i++)
   {
        ll temp ;
        cin>>temp;
        if(i!= 0 && prev > temp)
        {
            op += prev - temp;
            prev = temp + (prev-temp);
        }
        else
        {
            prev = temp;
        }
        
   }

   cout<<op;
}