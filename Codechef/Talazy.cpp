#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    long long int n , b , m ; 
    
    cin >> n >> b >> m ; 
    
    long long int ans = 0 ;
    
    while(n != 0) {
        
        int prob = (n + 1)/2 ;
        
        ans += prob * m  + b; 
        
        n -= prob ;

        m = 2*m ;
    }
    
    cout << ans - b << "\n" ; 
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