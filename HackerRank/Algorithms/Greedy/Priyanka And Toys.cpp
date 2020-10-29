#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ; 

    cin >> n ; 

    int a[n] , cnt = 0 ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    sort(a , a + n) ;

    for(int i = 0 ; i < n ;) {
        
        int min = a[i] ;

        i++ ;

        while(i < n and a[i] <= min + 4) i++ ;

        cnt++ ;
    }

    cout << cnt ;

    return 0 ;
}