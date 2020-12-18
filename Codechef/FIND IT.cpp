#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ,sum = -1 ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    sort(a , a + n) ;
    
    for(int i = 1 ; i < n ; i += 2) {
        if(a[i] != a[i - 1]) {
            sum = a[i - 1] ;
            break ;
        }
    }
    if(sum == -1) cout << a[n - 1] << "\n" ;
    else cout << sum << "\n" ; 
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