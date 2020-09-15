#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Did you observe some pattern ? */
/* Hint 2 : add something if remainder is 7 when n % 10 */

int main()
{
    int testcases = 1 ;
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        int n , cnt = 0 , ans = 0 , prev = 0 ;
        
        cin >> n ;
        
        int a = n ;
        
        while(a != 0) {
            cnt++;
            a /= 10 ;
        }
        
        for(int i = 2 ; i <= cnt ; ++i) {
            ans += pow(2 , i - 1) ;
        }
        
        ans += 1 ;
        
        while(n != 0) {
            if(n % 10 == 7) {
                ans += pow(2 , prev) ; 
            }
            prev++;
            n /= 10 ;
        }
        
        cout << ans << "\n" ;
    }
    return 0 ;
}