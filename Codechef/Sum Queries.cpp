#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    ll int n , m; 
    
    cin >> n >> m ; 
    
    while(m--) {
        
        ll int q ; 
        
        cin >> q ; 
        
        if(q >= n + 2 and q <= 3 * n) {
            cout << min(q - (n + 2) + 1 , 3*n - q + 1) << "\n" ;
        }
        else {
            cout << "0\n" ; 
        }
    }
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