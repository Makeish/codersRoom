#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , k ; 
    
    cin >> n >> k ; 
    
    int a[n] , cnt1 = 0 , cnt2 = 0 , ans = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        if(a[i] < 80 and a[i] > 9) cnt1++ ;
        else cnt2++ ;
        
    }
    
    if(cnt1 % k != 0) ans += 1 ;
    if(cnt2 % k != 0) ans += 1 ;
    
    cout << ans + cnt1/k + cnt2/k << "\n" ; 
    
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