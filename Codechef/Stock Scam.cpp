#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    ll int n , k ; 
    
    cin >> n >> k ; 
    
    string a = to_string(n) ;
    
    for(int i = 0 ; i < a.length() and k > 0 ; ++i) {
        
        if(a[i] != '9') {
            a[i] = '9' ;
            k-- ;
        }
    }
    
    cout << a << "\n" ; 
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