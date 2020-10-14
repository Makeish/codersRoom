#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , k , sum = 0 , bill;

    cin >> n >> k ;

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) {
            
        cin >> a[i] ; 

        sum += a[i] ;

    }
    
    cin >> bill ; 

    int ans = (sum - a[k])/2 ; 

    (ans == bill) ? cout << "Bon Appetit" : cout << bill - ans ; 

    return 0 ;
}