#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , k ;
    
    long long int ans1 = 0 , ans2 =0 ;
    
    cin >> n >> k ;
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    sort(a , a + n) ;
    
    k = min(k , n - k) ; 
    
    for(int i = 0 ; i < n ; ++i) {
        if(i < k) ans2 += a[i] ;
        else ans1 += a[i] ;
    }
    
    cout << abs(ans1 - ans2) << "\n" ; 
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