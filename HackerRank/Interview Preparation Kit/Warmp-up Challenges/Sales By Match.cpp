#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , ans = 0 ;

    cin >> n ;

    int a[n] ;

    map < int , int > mp ;

    for(int i = 0 ; i < n ; ++i) {

        cin >> a[i] ;
        mp[a[i]]++ ;

    }

    for(auto x:mp) {
        ans += x.second/2 ;
    }

    cout << ans ;

    return 0 ;
}