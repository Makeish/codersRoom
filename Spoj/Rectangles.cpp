#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t = 1; 
    
    // cin >> t ; 
    
    while(t--) {
        
        int n ; 
    
        cin >> n ; 
    
        int ans = 0 ;
        
        for(int i = 1 ; i <= n ; ++i) {
            ans++ ;
            for(int j = 2 ; j <= sqrt(i) ; ++j) {
                if(i % j == 0) ans++ ;
            }
        }
        
        cout << ans << "\n" ;
    }
    
    return 0 ;
}