#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , cnt_odd = 0 , cnt_even = 0 ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        if(a[i] & 1) cnt_odd++ ;
        else cnt_even++ ;
        
    }
    
    if(cnt_even > cnt_odd) cout << "READY FOR BATTLE" ;
    else cout << "NOT READY" ;
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