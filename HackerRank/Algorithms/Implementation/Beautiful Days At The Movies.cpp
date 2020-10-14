#include <bits/stdc++.h>

using namespace std ;

int reverse(int n)
{
    int rev = 0 ;

    while(n != 0) {
        rev = rev * 10 + n % 10 ;
        n /= 10 ;
    }

    return rev ;
}

int main()
{
    int test = 1 ;

    while(test--) {
        
        int n , cnt = 0 , i , j , k ;

        cin >> i >> j >> k  ;

        for(int p = i ; p <= j ; ++p) {
            if(abs(p - reverse(p)) % k == 0) cnt++ ; 
        }

        cout << cnt ; 
    
    }

    return 0 ;
}