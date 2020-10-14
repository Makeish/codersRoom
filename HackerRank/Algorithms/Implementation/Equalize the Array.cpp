#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int test = 1 ; 

    while(test--) {
        
        int n ; 

        cin >> n ;

        int a[n] , ans = 0 , maxi = 0 ;

        map < int , int > mp ; 

        for(int i = 0 ; i < n ; ++i) {
            
            cin >> a[i] ;
            mp[a[i]]++ ;

        }

        for(auto x:mp) {
            ans += x.second ;
            maxi = max(maxi , x.second) ;
        }

        cout << abs(ans - maxi) << "\n" ;

    }

    return 0 ;
}
