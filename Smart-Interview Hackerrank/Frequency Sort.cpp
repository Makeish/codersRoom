#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ; 
    
    while(testcases--) {
        
        int n ; 
        
        cin >> n ; 
        
        int a[n] ;
        
        map < int , int > mp ;
        
        multimap < int , int > mp1 ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
            
            mp[a[i]]++ ;
        
        }
        
        for(auto &x:mp) mp1.insert({x.second,x.first}) ;
        
        for(auto &x:mp1) {
            int p = x.first ; 
            while(p)  {
                cout << x.second << " " ; 
                p-- ;
            }
        }
        
        cout << "\n" ; 
    }
    return 0 ;
}