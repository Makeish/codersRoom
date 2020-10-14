#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1  ; cin >> test ; 

    while(test--) {
        
        int x , y , z ; 

        cin >> x >> y >> z ; 

        if(abs(x - z) > abs(y - z)) cout << "Cat B\n" ;
        else if(abs(x - z) < abs(y - z)) cout << "Cat A\n" ;
        else cout << "Mouse C\n" ; 
    
    }

    return 0 ;
}