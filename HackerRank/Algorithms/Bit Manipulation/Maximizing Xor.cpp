#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1 ; 

    // cin >> test ; 

    while(test--) {

        int l , r , ans = 0 ; 

        cin >> l >> r ;

        int sum = (l ^ r) ;

        while(sum) {

            ans |= sum ; 

            sum >>= 1 ;
        }

        cout << ans ;
        
    }

    return 0 ;
}