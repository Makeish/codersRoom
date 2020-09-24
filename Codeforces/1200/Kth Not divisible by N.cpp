#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : for n there are n - 1 not divisible numbers 
                i.e n - 1 -> n
                     k    -> ?
                     
*/

/* Hint 2 : check if u need to add or subtract something when special case occurs */

int main()
{

    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        long long int n , k ;  
    
        cin >> n >> k ; 
    
        if((k % (n - 1)) == 0) {
            cout << (1ll)*(n * k)/(n - 1) - 1 ;
        }
        else {
            cout << (1ll)*(n * k)/(n - 1)  ; 
        }
        
        cout << "\n" ; 
        
    }
    
    return 0 ; 
}