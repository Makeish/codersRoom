#include <bits/stdc++.h>

using namespace std ;

int find_lcm(int a[] , int n1)
{
    int lcm = a[0] ;

    for(int i = 1 ; i < n1 ; ++i) {
        lcm = lcm * (a[i]/__gcd(lcm , a[i])) ;
    }

    return lcm ; 
}

int find_gcd(int p[] , int size)
{
    int gcd = p[0] ;

    for(int i = 1 ; i < size ; ++i) {
        gcd = __gcd(gcd , p[i]) ; 
    }

    return gcd ;
}

int countNumbers(int a[] , int n1 , int b[] , int n2)
{
    int cnt = 0 ;

    int lcm = find_lcm(a , n1) ;

    int gcd = find_gcd(b , n2) ;

    for(int i = lcm , j = 2 ; i <= gcd ; i = lcm * j , ++j) {

        if(gcd % i == 0) cnt++ ;
    }

    return cnt ; 
}


void input(int a[] ,int n)
{
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
}

int main()
{
    int n1 , n2 ;

    cin >> n1 >> n2 ;

    int a[n1] , b[n2] ;

    input(a , n1) ;

    input(b , n2) ;


    cout << countNumbers(a , n1 , b , n2) ;

    return 0 ;
}
