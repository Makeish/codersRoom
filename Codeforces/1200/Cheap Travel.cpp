#include <bits/stdc++.h>

using namespace std ;

/* Hint 1 : Take three possibilities 
            1. all by a rubles type road
            2. all by b rubles type road 
            3. (think yourself)
*/ 

int main()
{
    int n , m , a , b ; 
    
    cin >> n >> m >> a >> b ; 
    
    int ans1 = n*a , ans2 = n*a , i , cnt = 1  , ans3;
    
    for(int i = n - m ; i > 0  ;i = i - m) {
        ans2 = ans2 - (cnt*m*a) + b ;
        ans1 = min(ans1 , ans2) ;
        
        if((i - m) < 0) {
            break ;
        }
    }
    
    if(i != 0)
    ans1 += i*a ;
    
    if(n % m == 0) {
        ans3 = (n/m)*b ;
    }
    else {
        ans3 = ((n/m)+1)*b ; 
    }
    
    cout << min(ans1,ans3) ;
    
    return 0 ;
}