#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Don't make it too complex , think it in a linear way */
/* Hint 2 : Can we do something if we start from end of the array */
int main() 
{
    int testcases = 1 ; 
    
    cin >> testcases ;
    
    while(testcases--) {
    
        int n , cnt = 0 , mini;
        
        cin >> n ;
        
        int a[n] ; 
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        mini = a[n - 1] ;
        
        for(int i = n - 1 ; i >= 0 ; i--) {
            if(mini >= a[i]) {
                mini = a[i] ;
            }
            else{
                cnt++;
            }
        }
        
        cout << cnt << "\n" ;
    }
    
    return 0 ;
}