#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , maxi = 0 , ans = 0 ; 

    cin >> n ; 
    
    int a[n] ;

    map < int , int > mp ;

    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
        mp[a[i]]++ ;
    }

    for(auto x:mp) {
        
        if(x.second > maxi) {
            maxi = x.second ;
            ans = x.first ; 
        }

    }

    cout << ans << "\n" ;

    return 0 ;
}