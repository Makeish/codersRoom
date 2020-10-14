#include <bits/stdc++.h>

using namespace std ;

string meet(int x1 , int v1 , int x2 , int v2)
{
    for(int i = 1 ; ; ++i) {
        if((x1 + v1*i) == (x2 + v2*i)) {
            return "YES" ;
        }

        if((x1 + v1*i > 1e8) or (x2 + v2*i > 1e8)) {
            return "NO" ;
        }
    }
}


int main()
{
    int x1 , v1 , x2 , v2 ;

    cin >> x1 >> v1 >> x2 >> v2 ;

    cout << meet(x1 , v1 , x2 , v2) ;

    return 0 ;
}