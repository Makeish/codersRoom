#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int g ; 
    
    cin >> g ; 
    
    while(g--) {
        
        int i , rounds , ans ; 
        
        cin >> i >> rounds >> ans ; 
        
        (rounds % 2 == 0) ? cout << rounds/2 : ((ans == i) ? cout << rounds/2 : cout << rounds/2 + 1) ;
        
        cout << "\n" ; 
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