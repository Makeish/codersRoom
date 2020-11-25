#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    long long int n , k , sum = 0 ; 
    
    cin >> n >> k ; 
    
    long long int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
        if(i < k)
        sum += a[i] ;
    }
    
    long long int ans = sum ; 
    
    for(int i = k ; i < n ; ++i) {
        sum += a[i] - a[i - k] ;
        ans = max(ans , sum) ;
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