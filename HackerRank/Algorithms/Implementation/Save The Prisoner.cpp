#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; cin >> testcases ;

    while(testcases--) {
        
        int n , m , s ; 

        cin >> n >> m >> s ;

        if((n - s + 1) <= m) {

            m = m - (n - s + 1) ;

            if((m % n) == 0)
            cout << n  << "\n" ;
            else 
            cout << m % n << "\n" ; 
        }
        else {
            cout << m + s - 1 << "\n" ;
        }
    }

    return 0 ;
}
