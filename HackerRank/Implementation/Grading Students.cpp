#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;

    cin >> testcases ;

    while(testcases--) {
        
        int n ;

        cin >> n ;

        int p = 5 - (n % 5) ;

        (n >= 38) ? (p < 3) ? cout << n + p : cout << n :cout << n ; 

        cout << "\n" ; 
    }
    return 0 ;
}