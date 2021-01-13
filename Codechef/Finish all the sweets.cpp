#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    ll int n , ans = 0 ;
    
    cin >> n ; 
    
    int a[n] ; 
    
    map < int , int > mp ;
    
    for(ll int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        mp[a[i]]++ ;
    }
    
    for(auto x:mp) ans += x.second/2 + x.second%2 ;
    
    cout << ans  ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    // cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}