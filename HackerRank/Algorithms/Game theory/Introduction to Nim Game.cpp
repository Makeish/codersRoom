#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;

    cin >> testcases ;

    while(testcases--) {
        
        int n , xori = 0 ;

        cin >> n ;

        int a[n] ;

        for(int i = 0 ; i < n ; ++i) {
            cin >> a[i] ;
            xori ^= a[i] ;
        }

        (xori == 0) ? cout << "Second" : cout << "First" ; 

        cout << "\n" ; 
    }
    return 0 ;
}