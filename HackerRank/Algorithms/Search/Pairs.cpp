#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , k ; 

    cin >> n >> k ;

    int a[n] , cnt = 0 ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    sort(a , a + n ) ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(binary_search(a + i + 1 , a + n , k + a[i])) cnt++ ;
    }

    cout << cnt ;

    return 0 ;
}