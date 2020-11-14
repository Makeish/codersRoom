#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , ans = -1 ; 
    
    cin >> n ; 
    
    int a[n + 1] ;
    
    for(int i = 1 ; i <= n ; ++i) {
        cin >> a[i] ;
    }
    
    for(int i = 1 ; i <= n ; ++i) {
        
        if(i == 1) {
            
            if(i+2 <= n and (a[i]%2 != a[i+1]%2) and (a[i+1]%2 == a[i+2]%2)) {
                ans = i ;
            }
        }
        else if(i == n) {
            
            if(i-2 >= 1 and (a[i]%2 != a[i-1]%2) and (a[i-1]%2 == a[i-2]%2)) {
                ans = i ;
            }
        }
        else if(i-1 >= 1 and i+1 <= n and (a[i]%2 != a[i-1]%2) and (a[i]%2 != a[i+1]%2)) {
            ans = i ;
        }
        
        if(ans != -1) break ;
    }
    
    cout << ans ; 
    
    return 0 ;
}