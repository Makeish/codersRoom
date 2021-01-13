#include <bits/stdc++.h>

using namespace std ;

int solve(int n)
{
    int count = 0 , ans = 0 ; 
    
    vector < int > a ; 
    
    while(n != 0) {
        
        if(n & 1) a.push_back(count) ;
        
        n >>= 1 ;
        
        count++ ;
    }
    
    for(int i = 0 ; i < a.size() ; ++i) {
        ans += (1 << (count - a[i] - 1)) ;
    }
    
    return ans ;
}

int main()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(a[i] & 1) cout << a[i] << "\n" ;
        else cout << solve(a[i]) << "\n" ; 
    }
    return 0 ; 
}