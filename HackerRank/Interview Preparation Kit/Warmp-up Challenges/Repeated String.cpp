#include <bits/stdc++.h>
#define ll long long

using namespace std ;

int main()
{
    string a ;

    cin >> a ;

    ll int n , cnt = 0 , ans = 0; cin >> n ; 

    for(ll int i = 0 ; i < a.length() ; ++i) {
        if(a[i] == 'a') cnt++ ;
    }

    ans += (n/a.length()) * cnt ; 

    for(ll int i = 0 ; i < (n % a.length()) ; ++i) {
        if(a[i] == 'a') ans++ ; 
    }

    cout << ans ;

    return 0 ;
}