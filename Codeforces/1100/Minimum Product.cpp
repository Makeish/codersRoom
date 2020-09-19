#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

ll int solve(ll int a ,ll int b , ll int x , ll int y , ll int k)
{
    if((a - x) <= k) {
        
        
        k = k - (a - x) ;
        a =  x ;
                
        if((b - y) <= k) {
            b = y ;
        }
        else {
            b = b - k ;
        }
    }
    else {
        a = a - k ;
    }
            
     return (1ll)*a*b ;
}

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        ll int a , b , x , y , k ;
        
        cin >> a >> b >> x >> y >> k ;
        
        cout << min(solve(a , b , x , y , k),solve(b , a , y , x ,  k)) << "\n" ;

    }
    return 0 ;
}