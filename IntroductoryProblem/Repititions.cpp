#include<iostream>
#include<string>


using namespace std;
#define ll long long
#define ld long double

int main()
{

    string input;
    cin>>input;
    ll count = 1;
    ll ans = 0;
    for(int i = 0; i<input.size() -1; i++)
    {
        if(input[i] == input[i+1])
        {
            count++;
        }

        else
        {
            ans = max(ans, count);
            count= 1;
        }
    }
    ans = max(ans , count);

    cout<<ans;
    return 0;
  
}