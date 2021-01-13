#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ; 
        
        int a[n] , ans = 0 ;
        
        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
        
        int res = 0 , count = 0  ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            if(a[i] == a[res]) count++ ;
            
            else count-- ;
            
            if(count == 0) {
                res = i ;
                count = 1 ;
            }
        }
        
        for(int i = 0 ; i < n ; ++i) {
            if(a[i] == a[res]) ans++ ;
        }
        
        if(ans > n/2) cout << "YES " << a[res] << "\n" ;
        else cout << "NO\n" ; 
        
    }
    return 0 ; 
}