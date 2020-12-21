#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t ; 
    
    cin >> t ;
    
    while(t--) {
    
        long long int a , b ; 
        
        cin >> a >> b ; 
        
        long long int ans = 1ll * (a * b) / __gcd(a , b) ;
        
        cout << 1ll * ans/a << " " << 1ll * ans/b << "\n" ;
        
    }
    return 0 ;
}