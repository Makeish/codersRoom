#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

int recursive(int a , int b)
{
    if(b == 0) {
        return 0 ;
    }
    else {
        return a + recursive(a , b - 1) ; 
    }
}

void solve()
{
    int a , b ; 
    
    cin >> a >> b ; 
    
    cout << recursive(a , b) << "\n" ; 
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