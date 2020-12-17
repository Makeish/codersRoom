#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases , i = 1 ;
    
    cin >> testcases ;
    
    while(i <= testcases) {
        
        int n , n1 , cnt = 0 ; 
        
        cin >> n >> n1 ; 
        
        int a[n1] ;
        
        for(int i = 0 ; i < n1 ; ++i) cin >> a[i] ;
        
        sort(a , a + n1 , greater < int > ()) ;
        
        for(int i = 0 ; i < n1 ; ++i) {
            
            if(n <= 0) break ;
            
            n -= a[i] ;
            cnt++ ;
        }
        
        if(n <= 0)
        cout << "Scenario #" << i << ":\n" << cnt << "\n" ;
        else
        cout << "Scenario #" << i << ":\nimpossible\n" ;
        
        ++i ;
        
        cout << "\n" ; 
    }
    return 0 ;
}