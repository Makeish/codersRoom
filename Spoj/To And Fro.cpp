#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ;
    
    while(cin >> n) {
    
        if(n == 0)
        break ;
    
        int flag = 0 ; 
    
        string a , ans = "" ; 
    
        cin >> a ; 
    
        for(int i = 0 ; i < a.length() ; i += n) {
            if(flag == 1) {
                reverse(a.begin() + i , a.begin() + i + n) ;
                flag = 0 ;
            }
            else {
                flag = 1 ;
            }
        }
        
        for(int i = 0 ; i < n ; i++) {
            
            int j = i ;
            
            while(j < a.length()) {
                ans += a[j] ;
                j += n ;
            }
        }
        
        cout << ans << "\n" ;
    }
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