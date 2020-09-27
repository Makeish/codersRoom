#include <bits/stdc++.h>

using namespace std ;

/** Pure Brute force solution **/

int main()
{
    int testcases = 1;
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        int size ;
        
        cin >> size ;
        
        int a[size] , b[size] , ans = 0  ;
        
        for(int i = 0 ; i < size ; ++i) {
            cin >> a[i] ;
            b[i] = a[i] ; 
        }
        
        for(int i = 0 ; i < size ; ++i) {
            for(int j = i ; j < size ; ++j) {
                
                int cnt1 = 0 ;
                
                for(int k = i ; k <= j ; ++k) {
                    if(a[k] == 1) {
                        b[k] = 0 ; 
                    }
                    else {
                        b[k] = 1 ; 
                    }
                }
                
                for(int i = 0 ; i < size ; ++i) {
                    if(b[i] == 1)
                    cnt1++; 
                }
                ans = max(ans , cnt1) ;
                 for(int i = 0 ; i < size ; ++i) {
                    b[i] = a[i] ; 
                }
            }
        }
        
        cout << ans << "\n" ;
    }
    return 0 ; 
}