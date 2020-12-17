#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int m , n ; 
    
    cin >> m >> n ; 
    
    for(int i = m ; i <= n ; ++i) {
        bool flag = true ;
        for(int j = 2 ; j * j <= i ; ++j) {
            if(i % j == 0) {
                flag = false ;
                break ;
            }
        }
        if(flag == true and i != 1) cout << i << "\n" ;
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