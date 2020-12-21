#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n , k ; 
        
        cin >> n >> k ; 
        
        int a[n] ;
        
        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
        
        sort(a , a + n) ;
        
        int mini = a[k - 1] - a[0] ;
        
        for(int i = k ; i < n ; ++i) {
            mini = min(mini , a[i] - a[i - k + 1]) ;
        }
        
        cout << mini << "\n" ; 
    }
    return 0 ;
}