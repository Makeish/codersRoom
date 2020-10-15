#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , cnt = 0 , ans = 0 ;

    cin >> n ;

    string a ;
    
    cin >> a ;

    for(int i = 0 ; i < n ; ++i) {

        if(cnt == -1 and a[i] == 'U') 
        ans++ ;

        if(a[i] == 'D') cnt-- ;
        else cnt++ ; 
    }

    cout << ans;

    return 0 ;
}
