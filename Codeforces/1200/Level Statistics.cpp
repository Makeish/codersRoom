#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , flag = 0 ; 
        
        cin >> n ; 
        
        int x[n] , y[n] ;
        
        cin >> x[0] >> y[0] ;
        
        if(y[0] > x[0]) {
            flag = 1 ;
        }
        
        for(int i = 1 ; i < n ; ++i) {
            cin >> x[i] >> y[i] ;
            
            if((x[i] < x[i-1]) or (y[i] < y[i-1]) or ((y[i] - y[i-1]) > (x[i] - x[i-1])) ) {
                flag = 1 ;
            }
        }
        
        if(flag) {
            cout << "NO\n" ;
        }
        else {
            cout << "YES\n" ; 
        }
 
    }
    return 0 ;
}