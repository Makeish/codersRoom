#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , ans ;
    
    cin >> n >> ans ;
    
    bool flag = 0 ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i <= (1 << n) ; i++) {
        
        int sum = 0 ;
        
        for(int j = 0 ; j < n ; ++j) {
            
            if(i & (1 << j)) sum += a[j] ;
            
        }
        
        if(sum == ans) {
            flag = 1 ;
            break ;
        }
        
    }
    if(flag) cout << "Yes\n" ;
    else cout << "No\n" ; 
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