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
        
        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
        
        sort(a , a + n) ;
        
        vector < int > v ; 
        
        v.push_back(a[0]) ;
        
        for(int i = 1 ; i < n ; ++i) {
            if(a[i] != a[i - 1]) v.push_back(a[i]) ;
        }
        
        int res = 1 , cnt = 1 ;
        
        for(int i = 0 ; i + 1 < v.size() ; ++i) {
            
            if(v[i] == v[i + 1] - 1) {
                cnt++ ;
                res = max(res , cnt) ; 
            }
            else {
                cnt = 1 ;
            }
        }
        
        cout << res << "\n" ; 
    }
    return 0 ;
}