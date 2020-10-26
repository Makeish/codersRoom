#include <bits/stdc++.h>

using namespace std ;

void lomutoPartition(int a[] , int n)
{
    swap(a[0] , a[n - 1]) ;

    int i = -1 , p = a[n - 1] ;

    for(int j = 0 ; j < n - 1 ; ++j) {
        if(a[j] < p) {
            i++ ;
            swap(a[i] , a[j]) ;
        }
    }

    swap(a[i + 1] , a[n - 1]) ;
}


int main()
{
    int n ; 

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    lomutoPartition(a , n) ;

    for(int i = 0 ; i < n ; ++i) cout << a[i] << " " ; 

    return 0 ;
}