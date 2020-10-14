#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1 ; 

    while(test--) {
        
        int n ; 

        cin >> n ;

        int a[n] , ans = 0 ;

        map < int , int > mp ; 

        for(int i = 1 ; i <= n ; ++i) {
            
            cin >> a[i] ;
            mp[a[i]]++ ;

        }

        for(auto x:mp) {
            ans += x.second ;
        }

        cout << ans << "\n" ;

        for(auto x:mp) {
            
            ans -= x.second ;
            if(ans <= 0) break ;
            cout << ans << "\n" ; 

        }

        

    }

    return 0 ;
}