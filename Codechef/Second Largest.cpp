#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int a , b , c ; 
    
    cin >> a >> b >> c ;
    
    if(a >= b and a >= c) {
        if(b >= c) {
            cout << b << "\n" ;
        }
        else {
            cout << c << "\n" ;
        }
    }
    else if(b >= a and b >= c) {
        if(a >= c) {
            cout << a << "\n" ;
        }
        else {
            cout << c << "\n" ; 
        }
    }
    else if(c >= a and c >= b) {
        if(a >= b) {
            cout << a << "\n" ;
        }
        else {
            cout << b << "\n" ; 
        }
    }
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}