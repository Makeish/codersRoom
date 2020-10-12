#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int a , b , cnt = 0 ;
        
        cin >> a >> b ; 
        
        while((a > 0) and (b > 0)) {
            
            if( ( (a & 1) == 1 and (b & 1) == 0 ) or ( (a & 1) == 0 and (b & 1) == 1) ) cnt++ ; 
            
            a >>= 1 ;
            b >>= 1 ; 
            
        }
        
        while(a != 0) {
            if(a & 1) cnt++ ;
            a >>= 1 ;
        }
        
        while(b != 0) {
            if(b & 1) cnt++ ;
            b >>= 1 ;
        }
        
        cout << cnt << "\n" ; 
    }
    return 0 ;
}