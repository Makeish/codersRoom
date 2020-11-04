#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int l , r , cnt = 0 ; 
    
    cin >> l >> r ; 
    
    for(int i = l ; i <= r ; ++i) {
        
        if(i % 10 == 2 or i % 10 == 3 or i % 10 == 9) cnt++ ; 
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