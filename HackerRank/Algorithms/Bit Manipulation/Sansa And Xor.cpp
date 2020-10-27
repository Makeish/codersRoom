#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; 

    cin >> test ; 

    while(test--) {

        int n , ans = 0 ; 

        cin >> n ; 

        int a[n] ;

        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;

            if(!(i & 1)) ans ^= a[i] ;
        
        }

        (n % 2 == 0) ? cout << "0\n" : cout << ans<< "\n" ; 

    }

    return 0 ;
}