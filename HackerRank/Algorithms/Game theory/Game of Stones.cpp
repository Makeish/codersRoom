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

        (n % 7 == 0 or n % 7 == 1) ? cout << "Second" : cout << "First" ; 

        cout << "\n" ; 
    }
    return 0 ;
}