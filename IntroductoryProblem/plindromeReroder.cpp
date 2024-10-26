#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
#define ld long double

bool checkPosibility(vector<int> freq)
{
    int countOdd = 0;
    for(int i = 0; i<freq.size() ; i++)
    {
        if(freq[i]%2 != 0)
        {
            countOdd++;
        }
    }
    if(countOdd>1)
    {
        return false;
    }
    return true;
}

int main()
{
    string s ;
    cin>>s;
    string palindrome = "";
    vector<int> freq(26,0);

    for(int i = 0; i<s.size() ; i++)
    {
        freq[s[i] - 'A']++;
    }
    bool possibility = checkPosibility(freq);
    if(!possibility)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        string mid = "";
        for(int i = 0;  i<freq.size() ; i++)
        {
            if(freq[i] != 0 && freq[i]%2 == 0)
            {
                int repetitions =  freq[i]/2;
                while(repetitions--)
                {
                    palindrome += char('A' + i);
                }
            }
            else if(freq[i] != 0 && freq[i]%2 != 0)
            {
                 int repetitions =  freq[i];
                while(repetitions--)
                {
                    mid += char('A' + i);
                }
            }
        }
        string revHalf = palindrome;
        reverse(revHalf.begin() , revHalf.end());
        palindrome = palindrome + mid + revHalf;
        cout<<palindrome<<endl;

    }


}


