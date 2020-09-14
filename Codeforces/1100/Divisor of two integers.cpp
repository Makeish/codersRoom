#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Is largest element is somewhere linked to our answer ?? */
/* Hint 2 : Can you find second ans wit first ans */

int main() 
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
    
        int n , first_ans , second_ans ;
        
        cin >> n ;
        
        int a[n] ; 
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        sort(a , a + n) ;
        
        first_ans = a[n - 1] ;
        
        for(int i = n-2 ; i >= 0 ; i--) {
            if(first_ans % a[i] == 0) {
                if(a[i] == a[i + 1 ] or a[i] == a[i-1]) {
                    second_ans = a[i] ;
                    break;
                }
            }
            else{
                second_ans = a[i] ;
                break;
            }
        }
        
        cout << first_ans << " " << second_ans ;
    }
    
    return 0 ;
}