#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int k , n ; 

    cin >> k >> n ;

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    cout << lower_bound(a , a + n , k) - a ;

    return 0 ;
}