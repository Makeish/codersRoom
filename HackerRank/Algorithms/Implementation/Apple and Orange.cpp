#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int s , t , a , b , m , n ; 

    cin >> s >> t >> a >> b >> m >> n ;

    int p[m] , q[n] , cntOfApples = 0 , cntOfOranges = 0 ;

    for(int i = 0 ; i < m ; ++i) {
        
        cin >> p[i] ;

        if((a + p[i]) >= s and (a + p[i]) <= t) 
            cntOfApples++ ; 
    }

    for(int i = 0 ; i < n ; ++i) {
        
        cin >> q[i] ;
        if((b + q[i]) >= s and (b + q[i]) <= t) 
            cntOfOranges++ ; 

    }

    cout << cntOfApples << "\n" << cntOfOranges << "\n" ; 

    return 0 ;
}