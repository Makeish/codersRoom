#include <bits/stdc++.h>
using namespace std ;

/* Hint 1 : As long as you encounter 0 and 2 keep two answers equal */
/* Hint 2 : if you encounter 1 then make one string big than another */
/* Hint 3 : reverse the process now , greedily make lower one get highest number */

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , i = 0; 
        
        cin >> n ; 
        
        string a , b = "" , c = "" ;
        
        cin >> a ;
        
        while( (i < n) and ((a[i] == '2') or (a[i] == '0'))) {
        
            if(a[i] == '2') {
                b += "1" ;
                c += "1" ;
            }
            else if(a[i] == '0') {
                b += "0" ;
                c += "0" ;
            }
           
            ++i ;
            
        }
        
        if( (i < n) and (a[i] == '1')) {
            b += "1" ;
            c += "0" ;
        }
        
        for(int j = i+1 ; j < n ; ++j) {
            if(a[j] == '2') {
                b += "0" ;
                c += "2" ;
            }
            else if(a[j] == '0') {
                b += "0";
                c += "0" ; 
            }
            else if(a[j] == '1') {
                b += "0" ;
                c += "1" ;
            }
        }
        
        cout << b << "\n" << c << "\n" ; 
 
    }
    return 0 ;
}