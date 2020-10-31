#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ; 
        
        int a[n][n] ;
        
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < n ; ++j) {
                cin >> a[i][j] ; 
            }
        }
        
        int fIndex = 0 , sIndex = n - 1 ;
        
        while(fIndex < n) {
            
            int ans = 0 , p = fIndex, q = sIndex ;
            
            while(p >= 0) {
                ans += a[p][q] ;
                p--;
                q-- ;
            }
            
            p = fIndex + 1 ;
            q = sIndex + 1 ;
            
            while(q < n) {
                ans += a[p][q] ;
                p++ ;
                q++ ;
            }
            
            cout << ans << " " ; 
            
            fIndex++ ;
        }
        
        fIndex = 1 , sIndex = 0 ;
        
        while(fIndex < n) {
            
            int ans = 0 , p = fIndex, q = sIndex ;
            
            while(q >= 0) {
                ans += a[p][q] ;
                p--;
                q-- ;
            }
            
            p = fIndex + 1 ;
            q = sIndex + 1 ;
            
            while(p < n) {
                ans += a[p][q] ;
                p++ ;
                q++ ;
            }
            
            cout << ans << " " ; 
            
            fIndex++ ;
        }
        
        cout << "\n" ; 
    }
    return 0 ;
}