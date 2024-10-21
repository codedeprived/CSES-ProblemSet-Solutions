#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    vector<int> result;

    int n ;
    cin>>n;
    if(n <= 3 && n >= 2)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    else
    {
        for(int i = 2 ; i<= n ;i+=2)
        {
            result.push_back(i);
        }

        for(int i = 1 ; i<= n ; i+=2)
        {
            result.push_back(i);
        }

        for(int i = 0 ; i<n ; i++)
        {
            cout<<result[i]<<" ";
        }
    }

    
}