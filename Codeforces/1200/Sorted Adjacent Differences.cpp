#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Consider a set of (+ve or -ve) integers as an interval , pick maximum from that and 
            add to your final answer */

int main()
{
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ;
        
        int a[n+1] ;
        
        for(int i = 1 ; i <= n ; ++i) {
            cin >> a[i] ;
        }
        
        sort(a+1 , a + n + 1) ; 
        
        if(n & 1) {
            
            cout << a[n/2 + 1] << " " ;
            
        }
            
        for(int i = n/2 ; i >= 1 ; i--) {
            cout << a[i] << " " << a[n - i + 1] << " " ; 
        }
        
        cout << "\n" ; 
    }
    return 0 ; 
}