#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test ; cin >> test ;

    while(test--) {
        
        int n , k , cnt = 0;

        cin >> n >> k ;

        int a[n] ; 

        for(int i = 0 ; i < n ; ++i) {

            cin >> a[i] ;

            if(a[i] <= 0)  cnt++ ;
        }

        (cnt >= k) ? cout << "NO\n" : cout << "YES\n" ; 
    
    }

    return 0 ;
}