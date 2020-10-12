#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ;
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        int n , q , input; 
        
        cin >> n ; 
        
        int a[n] ;
        
        map < int , int > mp ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
            mp[a[i]]++ ;
            
        }
        
        cin >> q ; 
        
        while(q--) {
            cin >> input ;
            cout << mp[input] << "\n" ;
        }
        
        
    }
    return 0 ;
}