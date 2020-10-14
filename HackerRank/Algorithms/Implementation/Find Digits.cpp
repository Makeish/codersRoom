#include <bits/stdc++.h>

using namespace std ;

int main()
{

    int test ; cin >> test ;

    while(test--) {
        
        int n , p , cnt = 0 ; 

        cin >> n ;

        p = n ;

        while(n != 0) {

            if(n % 10 != 0) {

                if((p % (n % 10)) == 0) 
                cnt++ ;
            
            }
            n /= 10 ; 
        }

        cout << cnt << "\n" ;
    
    }

    

    return 0 ;
}