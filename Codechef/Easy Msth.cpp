#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

int check(int n)
{
    int sum = 0 ;
    
    while(n != 0) {
        sum += (n % 10) ;
        n /= 10 ;
    }
    
    return sum ;
}

void solve()
{
    int n ; 
    
    cin >> n ;
    
    int a[n] , ans = INT_MIN ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < n ; ++i) {
        for(int j = i + 1 ; j < n ; ++j) {
            ans = max(ans , check(a[i]*a[j])) ;
        }
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