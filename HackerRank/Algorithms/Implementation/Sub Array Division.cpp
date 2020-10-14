#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , sum = 0 , k , size , cnt = 0 ; 

    cin >> n ; 

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    cin >> k >> size ;

    for(int i = 0 ; i < size ; ++i) {
        sum += a[i] ;
    }

    if(sum == k) cnt++ ;

    for(int i = size ; i < n ; ++i) {
        
        sum += a[i] - a[i - size] ;

        if(sum == k) cnt++ ; 
    }

    cout << cnt ;
    
    return 0 ;
}