#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; cin >> test ;

    while(test--) {
        
        int n , ans = 1;

        cin >> n ;

        for(int i = 1 ; i <= n ; ++i) {
            (i & 1) ? ans *= 2 : ans += 1 ;
        }

        cout << ans << "\n" ;
    
    }

    return 0 ;
}