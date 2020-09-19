#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ;
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        int n , m , input; 
        
        cin >> n >> m ; 
        
        map < int , int > mp ;
        
        for(int i = 1 ; i <= m ; ++i) {
            
            int maxi = -1 , ans = 0 ;
            
            for(int j = 1 ; j <= n ; ++j) {
                
                cin >> input ;
                
                if(input > maxi) {
                    maxi = input ;
                    ans = j ; 
                }
                
            }
            
            mp[ans]++ ;
        }
        
        int ans1 = 0 , ans2 = 0 ;
        
        for(auto x:mp) {
            if(x.second > ans2) {
                ans2 = x.second ;
                ans1 = x.first ;
            }
        }
        
        cout << ans1 << "\n" ;
        
    }
    return 0 ;
}