#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n+1] , pre[n+1] = {} ;
    
    for(int i = 1 ; i <= n ; ++i) {
        
        cin >> a[i] ;
        
        pre[i] = pre[i - 1] + a[i] ;
        
    }
    
    int q ;
    
    cin >> q ;
    
    while(q--) {
        
        int m , n ; 
        
        cin >> m >> n ;
        
        cout << pre[n] - pre[m - 1] << "\n" ; 
    }
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