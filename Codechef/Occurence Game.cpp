#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , k , ans = -1 , ans1 = -1 ; 
    
    cin >> k >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < n ; ++i){
        if(a[i] == k) {
            ans = i ;
            break;
        }
    }
    
    for(int i = n - 1 ; i >= 0 ; --i){
        if(a[i] == k) {
            ans1 = i ;
            break;
        }
    }
    
    if(ans == ans1) cout << "-1\n" ; 
    else cout << ans + 1 << " " << ans1 + 1 << "\n" ; 
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