#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    long long int n ; 
    
    cin >> n ; 
    
    cout << 1ll * ((((n%MOD) * (n % MOD) * (n % MOD)) % MOD) + ((((n - 1)%MOD) * ((n - 1)%MOD)))%MOD)%MOD << "\n" ; 
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