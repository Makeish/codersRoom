#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , m ; 

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ; 

    cin >> m ;

    int b[m] ;

    for(int i = 0 ; i < m ; ++i) cin >> b[i] ;

    stack < int > p ;

    p.push(a[0]) ;

    for(int i = 1 ; i < n ; ++i) {
        if(a[i] != a[i-1]) p.push(a[i]) ;
    }

    int ans = p.size() + 1 , i ;

    for(i = 0 ; i < m ; ++i) {

        while(!p.empty() and p.top() <= b[i]) {

            p.pop() ;

            ans-- ; 
        }

        cout << ans << "\n" ; 

    }

    return 0 ;
}