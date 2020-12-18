#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    for(int i = 1 ; i <= n ; ++i) {
        if(i & 1) {
            
            char a = 'A' ;
            
            for(int j = 1 ; j <= n ; ++j) {
                
                if(j <= n - i) cout << " " ;
                else cout << a++  ; 
            }
            
        }
        else {
            
            int k = 1 ;
            
            for(int j = 1 ; j <= n ; ++j) {
                if(j <= n - i) cout << " " ;
                else cout << k++  ; 
            }
        }
        cout << "\n" ; 
    }
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