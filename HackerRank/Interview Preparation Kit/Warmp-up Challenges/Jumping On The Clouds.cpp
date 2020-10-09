#include <bits/stdc++.h>
#define ll long long

using namespace std ;

int main()
{
    int n , cnt = 0 ; 

    cin >> n ;

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }

    for(int i = 0 ; i < n ; ) {
        if((i + 2 < n) and a[i+2] == 0) {
            i+=2 ; 
        }
        else {
            i++ ; 
        }
        cnt++ ; 
    }

    cout << cnt - 1 ;

    return 0 ;
}