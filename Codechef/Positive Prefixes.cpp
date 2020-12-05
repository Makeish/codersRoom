#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , k ; 
    
    cin >> n >> k ; 
    
    int a[n + 1] ; 
    
    for(int i = 1 ; i <= n ; ++i) a[i] = i ;
    
    if(n == 1) {
        cout << "1" ;
    }
    else {
        
        int p = n - k ;
        
        for(int i = 2 ; i <= n ; i += 2) {
            if(p > 0) {
                a[i] = -i ;
                p-- ;
            }
        }
        
        int i ; 
        
        if(n & 1) 
            i = n ;
        else 
            i = n - 1 ;
            
        for(int j = i ; j >= 1 ; j -= 2) {
            if(p > 0) {
                a[j] = -j ;
                p-- ;
            }
        }
        
        for(int i = 1 ; i <= n ; ++i) {
            cout << a[i] << " " ; 
        }
        
    }
    
    cout << "\n" ;
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