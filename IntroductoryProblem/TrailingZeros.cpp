#include<iostream>
using namespace std;
#define ll long long
#define ld long double



//find no of zeros at the end of factorial. like 
//For example, 20!=2432902008176640000 and it has 4 trailing zeros.
int main()
{
    int n = 0;
    cin>>n;
        int div = 5;
        int ans = 0;
        while(div <= n){
            ans += n/div;
            div *= 5;
        }
        cout<<ans<<endl;
        
        

}