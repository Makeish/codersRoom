#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , cnt = 0 ;
        
        cin >> n ;
        
        int a[n] , b[n] ;
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        for(int j = 0 ; j < n ; j++) {
            cin >> b[j] ;
        }
        
        sort(a , a + n) ;
        
        sort(b , b + n) ;
        
        for(int i = 0 , j = 0 ; i < n and j < n ; ) {
            if(a[i] > b[j]) {
                i++ ;
                j++ ;
                ++cnt ;
            }
            else {
                ++i ; 
            }
        }
        
        cout << cnt << "\n" ; 
    }
    return 0 ;
}