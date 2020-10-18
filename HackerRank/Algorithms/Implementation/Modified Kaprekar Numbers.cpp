#include <bits/stdc++.h>
#define ll long long 

using namespace std ;

ll int digit(ll int n)
{
    ll int cnt = 0 ;

    while(n != 0) {
        cnt++ ;
        n /= 10 ;
    }

    return cnt ;
}

ll int solveIt(ll int m)
{
    ll int d = digit(m) ;

    ll int ans = m*m ; 

    ll int a = 0 , b = 0 ;
    ll int i = 0 , j = 0 ;

    while(ans != 0) { 

        if(d != 0) {
            a += (pow(10 , i) * (ans % 10)) ;
            d-- ;
            ++i ; 
        }
        else {
            b += (pow(10 , j) * (ans % 10)) ;
            j++ ; 
        }
        ans /= 10 ;
    }
    // cout << a << " " << b << "\n" ;
    if( a + b == m) return 1;
    else return 0 ;
}

void solve(ll int p , ll int q)
{
    int flag = 0 ;

    for(ll int i = p ; i <= q ; ++i) {
        if(solveIt(i)) {
            cout << i << " " ;
            flag = 1 ;
        }
    }

    if(flag == 0) cout << "INVALID RANGE" ; 
}
int main()
{
    ll int p , q ; 

    cin >> p >> q ;

    solve(p , q) ;

    return 0 ;
}