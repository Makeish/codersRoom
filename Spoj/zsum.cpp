#include <bits/stdc++.h>

using namespace std ;

long long int power(long long int a ,long long int b)
{
    long long int ans = 1 ;
    
    while(b != 0) {
        
        if(b & 1) ans = (ans * a) % 10000007 ;
        
        a = (a * a) % 10000007  ;
        
        b >>= 1 ;
    }
    
    return ans ;
}

int main()
{
    // int testcases ; 
    
    // cin >> testcases ;
    
    while(true) {
        
        long long int n , k ; 
        
        cin >> n >> k ; 
        
        if(n == 0 and k == 0) break ; 
        
        long long  int a , b , c, d , ans  ; 
        
        
        a = power(n , k) ;
        
        b = (2 * power(n - 1, k)) % 10000007 ;
        
        c = (2 * power(n - 1 , n - 1)) % 10000007  ;
        
        d = power(n, n)  ;
        
        ans = ((a + b) % 10000007 + (c + d) % 10000007 ) % 10000007  ;
        
        cout << ans << "\n" ; 
    }
    return 0 ; 
}