#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int d1 , v1 , d2 , v2 , p ;
    
    cin >> d1 >> v1 >> d2 >> v2 >> p ;
    
    int sum = 0 , cnt = 0 ;
    
    for(int i = 1 ; ; ++i) {
        
        if(sum >= p) break ;
        
        if(i >= d1) {
            sum += v1 ;
        }
        if(i >= d2) {
            sum += v2 ;
        }
        cnt++ ;
    }
    
    cout << cnt << "\n" ; 
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    // cin >> testcases ;
    
    while(testcases--) {
        solve() ;
    }
    return 0 ; 
}