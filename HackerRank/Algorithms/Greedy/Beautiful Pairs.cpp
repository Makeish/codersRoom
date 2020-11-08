#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; 
    
    cin >> n ; 
    
    map < int , int > mp1 , mp2 ;
    
    int a[n] , b[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        mp1[a[i]]++ ;
        
    }
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> b[i] ;
        
        mp2[b[i]]++ ;
        
    }
    
    int cnt = 0 ;
    
    for(auto x:mp2) {
        cnt += min(mp1[x.first] , x.second) ; 
    }
    
    if(cnt == n) cout << cnt - 1 ;
    else cout << cnt + 1 ;
    
    return 0 ;
}