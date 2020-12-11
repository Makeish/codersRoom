#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int a , b , n ; 
    
    cin >> a >> b >> n ; 
    
    if(n % 2 == 0) {
        
        cout << max(a , b) / min(a , b) << "\n" ;
    
    }
    
    else {
        
        cout << max(a * 2 , b) / min(a * 2 , b) << "\n" ; 
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