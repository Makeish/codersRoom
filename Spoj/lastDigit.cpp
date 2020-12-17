#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    ll int n , m , ans; 
    
    cin >> n >> m ; 
    
    if(m == 0) ans = 1;
    
    else if(m % 4 == 0) {
        ans = pow(n % 10 , 4) ;
    }
    
    else {
        ans = pow(n % 10 , m % 4) ;
    }
    
    cout << ans % 10 << "\n" ;
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