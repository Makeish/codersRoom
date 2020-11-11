#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ;
    
    cin >> n ;
    
    int p = n , cnt = 0 ; 
    
    map < int , int > mp ;
    
    while(n--) {
        
        map < int , int > mp1 ;
        
        string a ;
        
        cin >> a ;
        
        for(int i = 0 ; i < a.length() ; ++i) mp1[a[i]]++ ;
        
        for(auto x:mp1) {
            mp[x.first] += 1 ;
        }
    }
    
    for(auto x:mp) {
        if(x.second == p) cnt++ ;
    }
    
    cout << cnt ;
    
    return 0 ;
}