#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , k , cnt = 0 ;
    
    cin >> n >> k ;
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    sort(a , a + n) ;
    
    for(int i = 0 ; i < n ; ) {
        
        if(i + 1 < n and a[i + 1] - a[i] <= k) {
            
            cnt++ ; 
            
            i+=2 ;
        }
        else {
            
            i++ ;
            
        }
    }
    
    cout << cnt << "\n" ; 
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