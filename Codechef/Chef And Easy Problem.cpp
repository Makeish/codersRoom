#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ;
    
    long long int a[n] , sum = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }
    
    sort(a , a + n) ;
    
    for(int i = n - 1 ; i >= 0 ; i -=2 ) {
        sum += a[i] ;
    }
    
    cout << sum << "\n" ; 
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