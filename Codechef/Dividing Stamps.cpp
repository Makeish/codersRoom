#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    long long int n ;
    
    unsigned long long int sum = 0ULL ; cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        sum += a[i] ;
    
    }
    
    unsigned long long int ans = (n * (n + 1ULL))/2 ;
    
    if(sum == ans) cout << "YES\n" ; 
    else cout << "NO\n" ; 
    
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