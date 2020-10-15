#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , ans = 1e9 ; cin >> n ;

    int a[n] ;

    map < int , int > mp ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    for(int i = 0 ; i < n ; ++i) {
        if(mp[a[i]]) {
            ans = min(ans , i - mp[a[i]]) ; 
        }
        mp[a[i]] = i ;
    }

    if(mp[a[0]]) {
        ans = min(ans , mp[a[0]]) ;
    }

    (ans == 1e9) ? cout << "-1": cout << ans ;

    return 0 ; 
}
