#include <bits/stdc++.h>

using namespace std ;

int main()
{

    while(true) {
        
        int n ; 
        
        cin >> n ; 
        
        if(n == -1) break ;
        
        int a[n] , sum = 0 ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
        
            sum += a[i] ;
            
        }
        
        if(sum % n == 0) {
            
            int ans = 0 ;
            
            sum /= n ;
            
            for(int i = 0 ; i < n ; ++i) {
                
                if(sum > a[i]) {
                    ans += sum - a[i] ;
                }
                
            }
            
            cout << ans << "\n" ; 
        }
        else {
            cout << "-1\n" ; 
        }
        
        
        
    }
    return 0 ;
}