#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ;
    
    cin >> test ;
    
    while(test--) {
        
        int n ; 
        
        cin >> n ; 
        
        int a[n] ;
        
        map < int , int > mp ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
            
            mp[a[i]]++ ;
            
        }
        
        for(auto x:mp) {
            if(x.second == 1) {
                cout << x.first << "\n" ;
                break ; 
            }
        }
    }
    return 0 ;
}