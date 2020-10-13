#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases , k = 1 , n ;
    
    cin >> testcases ;
    
    while(k <= testcases) {
        
        cout << "Case #" << k << ":\n" ; 
        
        cin >> n ;
        
        for(int i = 0 ; i <= n/2 ; ++i) {
           for(int j = 1 ; j <= n ; ++j) {
               if((j == n/2 - i + 1) or (j == n/2 + i + 1)) cout << "*" ;
               else cout << " " ;
           }
            cout << "\n" ; 
        }
        
        for(int i = 1 ; i <= n/2 ; ++i) {
           for(int j = 1 ; j < n ; ++j) {
               if((j == i + 1) or (j == n - i)) cout << "*" ;
               else cout << " " ;
           }
            cout << "\n" ; 
        }
        
        k++ ;
    }
    return 0 ;
}