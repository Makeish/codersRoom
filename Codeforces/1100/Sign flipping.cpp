#include <bits/stdc++.h>

using namespace std ;

/* Hint :  make odd index +ve and even index +ve */

int main() 
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , cnt = 0 ; 
        
        cin >> n ;
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
            
            if(i & 1) {
                if(a[i] > 0) {
                    a[i] = -a[i] ;
                } 
            }
            else {
                if(a[i] < 0) {
                    a[i] = abs(a[i]) ;
                }
            }
        }
        
        for(int i = 0 ; i < n ; ++i) {
            cout <<  a[i] << " " ;
        }
        
        cout << "\n" ; 
        
        
    }
    return 0 ;
}