#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , k , sum1 = 0 , sum2 = 0 ; 
        
        cin >> n >> k ; 
        
        sum1 = k - 1 ; 
        sum2 = 2 * (k - 1) ; 
        
        if((n - sum1 > 0) and ((n - sum1) & 1)) {
            cout << "YES\n" ; 
            
            for(int i = 1 ; i <= k - 1 ; ++i) {
                cout << "1 " ;
            }
            
            cout << n - sum1 << "\n" ; 
        }
        else if((n - sum2 > 0) and(n - sum2) % 2 == 0) {
            cout << "YES\n" ;
            
            for(int i = 1 ; i <= k - 1 ; ++i) {
                cout << "2 " ;
            }
            
            cout << n - sum2 << "\n" ; 
        }
        else {
            cout << "NO\n" ; 
        }
        
 
    }
    return 0 ;
}