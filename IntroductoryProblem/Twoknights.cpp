#include<iostream>
using namespace std;
#define ll long long
#define ld long double

int main()
{
    int n ;
    cin>>n;
    // all possible moves for 1st knight in nxn chessboard = n*n 
    // all possible moves for 2nd knight in nxn chessboard with 1 knigth already places = n*n -1 ;
    // possible moves in 2x3 chessboard = 2;
    // possible moves in 3x2 chessboard = 2;
    // no of 2x3 cessboard in nxn  = n-1*n-2;
    // no of 3x2 chessbord in nxn = n-2*n-1;
    //so formulat = k*k * ((k*k)-1)/2 - 4*(k-1)*(k-2);
    for(int k = 1 ; k<=n ; k++)
    {
        ll totalWayToPlaceKnigths = (long)k*k*((k*k)-1)/2;

        ll possibleMoves = 4*(k-1)*(k-2);

        cout<<totalWayToPlaceKnigths-possibleMoves<<endl;
    }
}