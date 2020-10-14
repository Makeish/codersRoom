#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1 ;

    while(test--) {
        
        int cnt[26] , maxi = -1 ;

        for(int i = 0 ; i < 26 ; ++i) cin >> cnt[i] ;

        string a ; cin >> a ;

        for(int i = 0 ; i < a.length() ; ++i) {
            maxi = max(maxi , cnt[a[i] - 'a']) ;
        }

        cout << maxi * a.length() ;
    
    }

    return 0 ;
}