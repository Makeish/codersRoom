#include <bits/stdc++.h>

using namespace std ;

int triplets(int a[] , int n , int d)
{
    int cnt = 0 ;

    for(int i = 0 ; i < n ; ++i) {
        if(binary_search(a + i + 1 , a + n , a[i] + d))
            if(binary_search(a + i + 1 , a + n , 2*d + a[i]))
                cnt++ ;
    }

    return cnt ; 
}

int main()
{
    int n , d ; 

    cin >> n >> d ;

    int a[n] ;

    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

    cout << triplets(a , n , d) ;

    return 0 ;
}