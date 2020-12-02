#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ;
    
    cin >> n ; 
    
    int a[n] , cnt = 0 ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(i == 0) {
            if(i + 1 < n and a[i] != a[i + 1]) cnt++ ;
        }
        else if(i == n - 1) {
            if(i - 1 >= 0 and a[i] != a[i - 1]) cnt++ ;
        }
        else {
            if(a[i] != a[i - 1] or a[i] != a[i + 1]) cnt++ ; 
        }
    }
    
    cout << cnt << "\n" ; 
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