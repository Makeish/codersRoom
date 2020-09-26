#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        long long int a1 , k , q , p ;
        
        cin >> a1 >> k ;
        
        q = a1 ; 
        
        for(long long int i = 2 ; i <= k ; ++i) {
            
            p = q ;
            
            long long int ans1 = 10 , ans2 = 0 ;
            
            while(p != 0) {
                ans1 = min(ans1 , p%10) ;
                ans2 = max(ans2 , p%10) ;
                p /= 10 ;
            }
            
            if((ans1 * ans2) == 0) {
                break ; 
            }
            q = q + (1ll)*ans1 * ans2 ;
        }
        
        cout << q << "\n" ;
    }
    
    return 0 ;
}