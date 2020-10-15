#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , q ; cin >> n >> q ;

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    while(q--) {
        
        int start , end ;

        cin >> start >> end ; 

        cout << *min_element(a + start , a + end + 1) << "\n" ; 
    }

    return 0 ; 
}
