#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    ll int n , ans = 1e15 , index ;
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    ll int pre[n] , suff[n] ;
    
    pre[0] = a[0] , suff[n - 1] = a[n - 1] ;
    
    for(int i = 1 ; i < n ; ++i) {
        pre[i] = pre[i - 1] + a[i] ;
    }
    
    for(int i = n - 2 ; i >= 0 ; i--) {
        suff[i] = suff[i + 1] + a[i] ;
    }
    
    for(int i = 0 ; i < n ; ++i) {
        
        if(pre[i] + suff[i] < ans) {
            ans = pre[i] + suff[i] ;
            index = i ;
        }
    }
    
    cout << index + 1 << "\n" ; 
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