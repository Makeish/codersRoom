#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    long long int sum = 0 ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        sum += a[i] ;
    }
    
    int q ; 
    
    cin >> q ;
    
    while(q--) {
        
        int a , b , c ;
        
        cin >> a >> b >> c ;
        
        sum += (b - a + 1) * c ;
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