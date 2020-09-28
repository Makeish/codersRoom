#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int a[5] , min = 1e9+1, max = 0;

    for(int i = 0 ; i < 5 ; ++i) {
        cin >> a[i] ;
    }

    long long sum = 0 ;

    for(int i = 0 ; i < 5 ; ++i) {
        sum += a[i] ;

        if(a[i] < min) {
            min = a[i] ;
        }

        if(a[i] > max) {
            max = a[i] ;
        }
    }

    cout << sum - max << " " << sum - min ;
    

    

    return 0 ;
}