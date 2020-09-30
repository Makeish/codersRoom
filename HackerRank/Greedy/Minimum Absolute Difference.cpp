#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ; 

    cin >> n ; 

    int a[n] ; 

    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ; 

    }

    sort(a , a + n) ;

    int abs_diff = 1e9 ;

    for(int i = 1 ; i < n ; ++i) {
        abs_diff = min(abs_diff , abs(a[i] - a[i - 1])) ;
    }

    cout << abs_diff ;

    return 0 ;
}