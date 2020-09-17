#include <bits/stdc++.h>

using namespace std ;

int main() 
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ;
        
        cin >> n ;
        
        int a[n] , maxi = 0 ;
        
        map < int , int > mp ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
            mp[a[i]]++ ;
            
        }
        
        for(auto x:mp) {
            maxi = max(maxi , x.second) ;
        }
        
        int p = mp.size() ; 
        
        if((maxi - (p - 1)) >= 2) {
            cout << p << "\n" ; 
        }
        else if((maxi - p)  >= 0) {
            cout << p - 1 << "\n" ;
        }
        else {
            cout << maxi << "\n" ; 
        }
        
    }
    return 0 ;
}