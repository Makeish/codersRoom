#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    sort(a , a + n) ;
    
    int q , input ; cin >> q ;
    
    while(q--) {
        
        cin >> input ; 
        
        if(input < a[0]) cout << INT_MIN << "\n" ;
        
        else if(input >= a[n - 1]) cout << a[n - 1] << "\n" ; 
        
        else {
            
            auto pos = lower_bound(a , a + n , input) - a ;
            
            if(a[pos] == input) cout << a[pos] << "\n" ; 
            else cout << a[pos - 1] << "\n" ; 
        }
        
    }
    return 0 ;
}