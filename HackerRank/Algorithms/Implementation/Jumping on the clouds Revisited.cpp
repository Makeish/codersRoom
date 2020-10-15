#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int testcases = 1 ; 

    while(testcases--) {
        
        int n , k ; 

        cin >> n >> k ;

        int a[n] ;

        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

        int index = 0 , energy = 100 ;

        do {
            
            index = (index + k) % n ;
           
            if(a[index] == 1) energy -= 3 ;
            else energy -= 1 ;

        }while(index != 0) ;

        cout << energy ;

    }

    return 0 ;
}
