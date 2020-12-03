#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    long long int a[3] ;
    
    cin >> a[0] >> a[1] >> a[2] ;
    
    sort(a , a + 3) ;
    
    long long int p = 1 ; 
    
    for(int i = 0 ; i < 3 ; ++i) {
        p = (a[i] - i) % MOD * p % MOD ; 
    }
    
    cout << p << "\n" ; 
    
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