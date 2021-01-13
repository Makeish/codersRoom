#include <bits/stdc++.h>
#define e 2.71828
#define pi acos(-1)

using namespace std ;

int main()
{
    int test , j = 1 ; 
    
    cin >> test ; 
    
    while(j <= test) {
        
        cout << "Case " << j << ": " ; 
        
        int n , i ;
        
        cin >> n ; 
        
        n -= 5 ; 
        
        for(i = n ; i > 0 ; i -= 5) {
            if(i % 3 == 0) {
                break ;
            }
        }
        
        if(i > 0) cout << i << "\n" ;
        else cout << "-1\n" ;
        
        ++j ;
    }
    return 0 ;
}