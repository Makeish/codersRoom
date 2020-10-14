#include <bits/stdc++.h>

using namespace std ;

void swapp(int a[] , int start , int end)
{
    while(start < end) {
        swap(a[start++] , a[end--]) ; 
    }
}

void rotate(int a[] , int n , int k)
{
    swapp(a , 0 , n - 1) ;
    swapp(a , 0 , k - 1) ;
    swapp(a , k , n - 1) ;
}

int main()
{
    int test = 1 ; 

    while(test--) {
        
        int n , k , q , input ; 

        cin >> n >> k >> q ;

        k %= n ;

        int a[n] ; 

        for(int i = 0 ; i < n ; ++i) cin >> a[i] ;

        rotate(a , n , k) ;

        while(q--) {
            
            cin >> input ;
            cout << a[input] << "\n" ; 

        }
    
    }

    return 0 ;
}