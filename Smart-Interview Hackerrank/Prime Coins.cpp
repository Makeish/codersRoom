#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ;
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int n  ;
        
        cin >> n ;
        
        (n % 6 == 0) ? cout << "Banta\n" : cout << "Santa\n" ; 
    }
    return 0 ;
}