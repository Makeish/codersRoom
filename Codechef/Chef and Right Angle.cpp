#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

int cnt = 0 ; 

void solve()
{
    int a , b , c , d , e , f ;
    
    cin >> a >> b >> c >> d >> e >> f ;
    
    int p = ((c - a) * (c - a)) + ((d - b) * (d - b)) ;
    int q = ((c - e) * (c - e)) + ((d - f) * (d - f)) ;
    int r = ((e - a) * (e - a)) + ((f - b) * (f - b)) ;
    
    if((p + q == r) or (p + r == q) or (q + r == p)) cnt++ ; 
    
    
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    
    cout << cnt ;
    
    return 0 ; 
}