#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long int n , k , sum = 0 , cnt = 0 ;

    cin >> n >> k ;

    long long int a[n] ;

    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
    }

    sort(a , a + n) ; 

    for(int i = 0 ; i < n ; ++i) {

        if(sum + a[i] <= k) {
            sum += a[i] ;
            cnt++ ;
        }
    }

    cout << cnt ;
    return 0 ;
}