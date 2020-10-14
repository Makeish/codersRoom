#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1 ; 

    while(test--) {
        
        int n ; 

        cin >> n ;

        int a[n] , temp[n] ,  ans ; 

        for(int i = 1 ; i <= n ; ++i) {
            
            cin >> a[i] ;

            temp[a[i]] = i ;
        
        }

        for(int i = 1 ; i <= n ; ++i) 
        cout << temp[temp[i]] << "\n" ; 

        

    }

    return 0 ;
}