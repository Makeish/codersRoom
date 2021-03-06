#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void input(int a[] , int n)
{
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
}
void solve()
{
    ll int n , k , ans = 0 ;
    
    cin >> n >> k ; 
    
    int a[n] , b[n] ;
    
    input(a , n) ;
    
    input(b , n) ; 
    
    for(int i = 0 ; i < n ; ++i) {
        ans = max(ans , 1ll * k/a[i] * b[i]) ;
    }
    
    cout << ans << "\n" ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}