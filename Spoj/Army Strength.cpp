#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n1 , n2 ; 
        
        cin >> n1 >> n2; 
        
        int a[n1] , b[n2] ;
        
        for(int i = 0 ; i < n1 ; ++i) cin >> a[i] ;
        
        for(int i = 0 ; i < n2 ; ++i) cin >> b[i] ;
        
        sort(a , a + n1) ;
        
        sort(b , b + n2) ;
        
        int i = 0 , j = 0 ;
        
        while(i < n1 and j < n2) {
            
            if(a[i] >= b[j]) j++ ;
            else i++ ;
        }
        
        if(j == n2) cout << "Godzilla\n" ;
        else cout << "MechaGodzilla\n" ; 
    }
    return 0 ;
}