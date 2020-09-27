#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Consider a set of (+ve or -ve) integers as an interval , pick maximum from that and 
            add to your final answer */

int main()
{
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , flag = 0 , flag1 = 0 ; 
        
        cin >> n ; 
        
        long long int p = -1e9-1 , ans = 0 , a[n]; 
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        for(int i = 0 ; i < n ; ) {
            
            while((a[i] > 0) and (i < n)) {
                p = max(p , a[i]) ;
                i++;
            }
            
            if(p != -1e9-1) {
                ans += p ;
                p = -1e9-1 ;
            }
            while((a[i] < 0) and (i < n)) {
                p = max(p , a[i]) ;
                i++;
            }
            
             if(p != -1e9-1) {
                ans += p ;
                p = -1e9-1 ; 
            }
        }
        
        cout << ans << "\n" ; 
        
    }
    return 0 ; 
}