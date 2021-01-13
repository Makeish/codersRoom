#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , start = 0 , end = n + 1 ; 
    
    cin >> n ; 
    
    int a[n + 1] ;
    
    for(int i = 1 ; i <= n ; ++i) cin >> a[i] ;
    
    for(int i = 1 ; i <= n ; ++i) {
        if(a[i] != i) {
            start = i ;
            break ; 
        }
    }
    
    for(int i = n ; i >= 0 ; --i) {
        if(a[i] != i) {
            end = i ;
            break ; 
        }
    }
    
    reverse(a + start , a + end + 1) ;
    
    for(int i = 1 ; i <= n ; ++i) {
        if(a[i] != i) {
            cout << "0 0" ;
            return ;
        }
    }
    
    if(start == 0 or end == n + 1) cout << "0 0" ;
    else cout << start << " " << end ;
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