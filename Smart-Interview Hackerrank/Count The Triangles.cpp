#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
        
        int n , ans = 0 ; 
        
        cin >> n ; 
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
        }
        
        sort(a , a + n) ; 
        
        for(int i = n - 1 ; i >= 0 ; --i) {
            
            int j = 0 , k = i - 1 ; 
            
            while(j < k) {
                
                if(a[j] + a[k] > a[i]) {
                    ans+= (k - j) ;
                    k-- ; 
                }
                else {
                    j++ ;
                }
            }
        }
        
        cout << ans << "\n" ; 
    }
    return 0 ;
}