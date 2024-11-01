#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
#define ll long long
#define ld long double
// Input will be 1 - 16 integer
// if n = 2 , generate 00 10 11 01
// if n = 3 , generate 000 100 010 001 110 101 011 111
// if n = 4 , generate 0000 1000 0100 0010 0001 1100 1010 1001 0101 0011 0110 1110 0111 1011 1101 1111


ll powerOf2(int n)
{
    ll pow = 1;
    for(int i =  0 ; i<n; i++)
    {
        pow *= 2;
    }
    return pow;
}

// its a binary string of 0/1 we jsut need to add one!
void addOne(string& s)
{
    int carry = 0;
    int i = s.size() - 1;
    while(i>=0)
    {
        if(s[i] == '0')
        {
            s[i] = '1';
            i--;
            break;
        }

        else
        {
            s[i] = '0';
            i--;
        }
    }   
    if(carry)
    {
        reverse(s.begin(),s.end());
        s+='1';
        reverse(s.begin() ,s.end());
    }

}
int main()
{
    string s = "";

    int n ; cin>>n;
    for(int i = 0; i <n ; i++)
    {
        s+='0';
    }
    int pow = powerOf2(n);

    for(int i = 0;  i< pow ; i++)
    {
        cout<<s<<endl;
        addOne(s);
    }


}