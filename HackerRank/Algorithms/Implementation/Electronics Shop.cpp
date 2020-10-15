#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int k , n , m , maxi = -1 ; 

    cin >> k >> n >> m ; 

    int a[n] , b[m] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ; 
    for(int i = 0 ; i < m ; ++i) cin >> b[i] ;

    sort(a , a + n) ;

    sort(b , b + m) ;

    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j < m ; ++j) {
            
            if(a[i] + b[j] <= k) {
                maxi = max(maxi , a[i] + b[j]) ;
            }
        }
    }
     cout << maxi ;

    return 0 ;
}