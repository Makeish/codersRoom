#include <bits/stdc++.h>

using namespace std ;


/* Hint 1 : 1 odd x-1 even , 2 odd x -2 even pattern */

int main()
{

    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , x , cnt1 = 0 ,cnt2 = 0 ;
        
        cin >> n >> x ;
        
        int a[n] , flag = 0 ;
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
            if(a[i] & 1) {
                cnt1++ ;
            }
            else {
                cnt2++ ; 
            }
        }
        
        for(int i = 1 ; i <= x ; i = i+2) {
            if((cnt1 >= i) and (cnt2 >= (x - i))) {
                flag = 1 ;
                break;
            }
        }
        
        (flag == 1) ? cout << "Yes\n" : cout << "No\n" ; 
    }
    
    return 0 ; 
}