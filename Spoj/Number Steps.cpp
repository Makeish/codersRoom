#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases ; 
    
    cin >> testcases ;
    
    while(testcases--) {
        
        int a , b ; 
        
        cin >> a >> b ; 
        
        if(a == b or a == (b + 2))
        {
            if(a % 2 == 0 and b % 2 == 0) {
                cout << a + b << "\n" ;
            }
            else {
                cout << a + b - 1 << "\n" ; 
            }
        }
        else
        cout << "No Number\n" ; 
    }
    return 0 ;
}