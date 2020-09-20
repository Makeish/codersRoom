#include <bits/stdc++.h>
#define ll long long 
     
using namespace std ;
     
int main()
{
    int testcases = 1; 
        
    cin >> testcases ;
    
    while(testcases--) {
        
        int k , i  ; 
        
        cin >> k ;
        
        for(i = 19 ; ;i+=9) {
            
            int j = i , ans = 0 ;
            
            while(j != 0) {
                ans += j%10;
                j /= 10 ;
            }
            
            if(ans == 10) {
                k-- ;
            }
            
            if(k == 0)
            break;
        }
        
        cout << i << "\n" ; 
    
    }
        
        return 0 ;
    }