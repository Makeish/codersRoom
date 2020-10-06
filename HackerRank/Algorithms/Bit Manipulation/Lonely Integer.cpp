#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , xori = 0 , input ;

    cin >> n ;

    while(n--) {

        cin >> input ;

        xori ^= input ;

    }

    cout << xori ;

    return 0 ;
}