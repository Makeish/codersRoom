#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , x , y ; 
    
    cin >> n >> x >> y ;
    
    int a[n] ;
    
    double ans = 0.00f ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    sort(a , a + n , greater < int > ()) ;
    
    int p = n/x , j = 0 ; 
    
    for(int i = 0 ; i < p ; ++i) {
        
        int k = 0 , sum = 0 ;
        
        while(k < x) {
            sum += a[j] ;
            j++ ;
            k++ ;
        }
        
        ans += (double)sum/x ; 
    }
    
    cout << fixed << setprecision(6) << ans << "\n" ;
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