#include <bits/stdc++.h>
#define ll long long 
     
using namespace std ;
     
int main()
{
    int testcases ;
        
    cin >> testcases ;
    
    while(testcases--) {
        
        int x1 , y1 , z1 , x2 , y2 , z2 , sum = 0 , ans ; 
            
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 ;
            
        ans = min(z1 , y2) ;
            
        sum += 2*ans ;
            
        z1 -= ans ; y2 -= ans ;
            
        if(z1 > 0) {
            
            ans = min(z1 , z2) ;
                
            z1 -= ans ;
                
            z2 -= ans ;
        }
            
        if(z1 > 0) {
        
            ans = min(z1 , x2) ;
                
            z1 -= ans ;
                
            x2 -= ans ;
        }
            
        if(y2 > 0) {
            
            ans = min(y1 , y2) ;
                
            y1 -= ans ;
            
            y2 -= ans ;
        }
            
        if(y1 > 0) {

            ans = min(y1 , x2) ;
            
            y1 -= ans ;
            
            x2 -= ans ;
    
        }
            
        if(x1 > 0 and z2 > 0) {
        
            ans = min(x1 , z2) ;
                
            x1 -= ans ;
            z2 -= ans ;
        }
            
        if(x1 > 0 and y2 > 0) {
            ans = min(x1 ,y2) ;
                
            x1 -= ans ;
            y2 -= ans ;
        }
            
        if(x1 > 0 and x2 > 0) {
            ans = min(x1 , x2) ;
                
            x1 -= ans ;
            x2 -= ans ;
        }
            
        if(y1 > 0 and z2 > 0) {
            ans = min(y1 , z2) ;
                
            sum -= 2*ans ;
                
            y1 -= ans ;
                
            z2 -= ans ;
        }
            
        cout << sum << "\n" ; 

        }
        return 0 ;
    }