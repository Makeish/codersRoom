#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n ;
        
        cin >> n ; 
        
        int x , cnt[3] = {} ;
        
        for(int i = 0 ; i < n ; ++i) {
            
            cin >> x ;
            cnt[x % 3]++ ; 
            
        }
        
        int ans = cnt[0] ;
        int res = min(cnt[1] , cnt[2]);
        
        cnt[1] -= res ;
        cnt[2] -= res ;
        
        ans = ans + res + (cnt[1] + cnt[2])/3 ;
        
        cout << ans << "\n" ;
        
    }
    return 0 ;
}