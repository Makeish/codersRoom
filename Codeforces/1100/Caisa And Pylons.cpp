#include <bits/stdc++.h>

using namespace std ;


int main() 
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
    
        int n , energy = 0 , cost  ;
        
        cin >> n ;
        
        int a[n] ; 
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        cost = a[0] ;
        
        for(int i = 0 ; i < n-1 ; ++i) {
            
            energy += a[i] - a[i+1] ;
            
            if(energy < 0) {
                cost = cost - energy ;
                energy = 0 ;
            }
        }
        
        cout << cost << "\n" ; 
    }
    
    return 0 ;
}