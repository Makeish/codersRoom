#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases , i = 1 ; 
    
    cin >> testcases ;
    
    while(i <= testcases) {
        
        cout << "Case " << i << ":" ;
        
        int a , b , c ; 
        
        cin >> a >> b >> c ;
        
        if(c % __gcd(a , b) == 0) cout << "Yes\n" ;
        else cout << "No\n" ;
        
        ++i ; 
    }
    return 0 ; 
}