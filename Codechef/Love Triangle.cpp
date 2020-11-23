#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int a , b , c ;
    
    cin >> a >> b >> c ;
    
    if((a + b) > c and (b + c) > a and (a + c) > b) {
        
        long double s= (a + b + c)/2 ;
        
        long double m = sqrt(s*(s - a)*(s - b)*(s - c)) ; 
        
        cout << "YES " << fixed << setprecision(5) << m;
    }
    else {
        cout << "NO" ; 
    }
    
    cout << "\n" ; 
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