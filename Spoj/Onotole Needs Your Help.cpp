#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases , input , ans = 0 ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        
        cin >> input ;
        ans ^= input ;
        
    }
    
    cout << ans ;
    
    return 0 ;
}