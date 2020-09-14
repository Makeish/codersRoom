#include <bits/stdc++.h>

using namespace std ;

int main() 
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        int n , m , k , ans = 0 ; 
        
        cin >> n >> m >> k ;
        
        int a[m+1] ;
        
        for(int i = 0 ; i <= m ; i++) {
            cin >> a[i];
        }
        
        for(int i = 0 ; i < m ; i++) {
            
            int cnt = 0 , fredo = a[m] ;
            
            for(int j = 0 ; j < 32 ; ++j) {
                if(((a[i] >> j) & 1) != ((fredo >> j) & 1 )) {
                    cnt++;
                }
            }
            
            if(cnt <= k) {
                ans++;
            }
        }
        
        cout << ans ;
        
        
    }
    
    return 0 ;
}