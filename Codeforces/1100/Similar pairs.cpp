#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Both odd numbers and even numbers are of even count , then answer is yes */
/* Hint 2 : if one is odd , other is even , answer is no */
/* Hint 3 : if both are odd , check if there is atleast one pair with adjacent difference 1 */

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , cnt1 = 0 , cnt2 = 0 ; 
    
        cin >> n ; 
    
        int a[n] , flag = 0 ; 
    
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
    
        sort(a,a+n) ;
        
        if(a[1] - a[0] == 1) {
            flag = 1 ;
        }
        
        for(int i = 0 ; i < n ; i++) {
    
            if(a[i] & 1) {
                cnt1++;
            }
            else {
                cnt2++;
            }
            
            if(i != 0 and (a[i] - a[i-1] == 1)) {
                flag = 1 ;
            }
        }
        
        if((cnt1 % 2 == 0 ) and (cnt2 % 2 == 0)) {
            cout << "YES\n" ;
        }
        else if((cnt1 % 2 != 0 ) and (cnt2 % 2 == 0) or (cnt1 % 2 == 0 ) and (cnt2 % 2 != 0) ) {
            cout << "NO\n" ;
        }
        else{
            if(flag != 1)
                cout << "NO\n";
            else
                cout << "YES\n" ;
        }
    }
    
    return 0 ; 
}