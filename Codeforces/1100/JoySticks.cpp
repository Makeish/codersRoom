#include <bits/stdc++.h>

using namespace std ;

int main() 
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
    
        int a , b  , cnt = 0 ; 
        
        cin >> a >> b ;
        
        while((a > 1 and b > 0) or (b > 1 and a > 0)) {
            
            cnt++;
            
            if(a <= b) {
                a += 1 ;
                b -= 2 ;
            }
            else{
                b += 1 ;
                a -= 2 ;
            }
            
        }
        
        cout << cnt ;
    }
    
    return 0 ;
}