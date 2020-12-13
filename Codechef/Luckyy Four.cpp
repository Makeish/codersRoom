#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , cnt = 0 ;
    
    cin >> n ; 
    
    while(n != 0) {
        
        if(n % 10 == 4) cnt++ ;
        
        n /= 10 ;
    }
    
    cout << cnt << "\n" ; 
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