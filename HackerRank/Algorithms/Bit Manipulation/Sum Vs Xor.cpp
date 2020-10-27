#include <bits/stdc++.h>

using namespace std ;

long long int power(int cnt)
{
    long long ans = 1 ;

    while(cnt--) ans *= 2 ;

    return ans ;
}
int main()
{
    long long int n , cnt = 0 ;

    cin >> n ; 

    while(n) 
    {
        if(n % 2 == 0) cnt++ ;

        n /= 2  ;
    }

    cout << (1ll) * power(cnt) ;

    return 0 ;
}
