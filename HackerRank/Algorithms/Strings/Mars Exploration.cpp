#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string a ;

    cin >> a ;

    int cnt = 0 ;

    for(int i = 0 ; i < a.length() ; i += 3) {
        if(a[i] != 'S') cnt++ ;
        if(a[i+1] != 'O') cnt++ ;
        if(a[i+2] != 'S') cnt++ ; 
    }

    cout << cnt ;

    return 0 ;
}