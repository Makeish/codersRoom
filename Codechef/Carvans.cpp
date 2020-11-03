#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int ans = 1 ;
    
    int n , mini; cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    mini = a[0] ; 
    
    for(int i = 1 ; i < n ; ++i) {
        
        if(a[i] <= mini) {
            ans++ ;
            mini = a[i] ; 
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