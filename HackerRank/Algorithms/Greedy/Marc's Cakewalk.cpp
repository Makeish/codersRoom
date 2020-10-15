#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ;
    
    long long  cnt = 0 ; 
    
    cin >> n  ;

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    sort(a , a + n , greater<int>()) ;

    for(int i = 0 ; i < n ; ++i) {
        cnt += a[i]*pow(2 , i) ; 
    }
    
    cout << cnt ;

    return 0 ; 
}
