#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1 ;

    while(test--) {
        
        int n , cnt = 0 , k = 5;

        cin >> n ;

        for(int i = 1 ; i <= n ; ++i) {
            cnt += k/2 ;
            k = (k/2)*3 ;
        }

        cout << cnt ; 
    
    }

    return 0 ;
}