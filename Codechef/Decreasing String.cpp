#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int k , p = 1 ; 
    
    cin >> k ;
    
    string a = "a" ; 
    
    for(int i = 1 ; i <= k ; ++i) {
        
        if(p == 26) {
            p = 1 ; 
            a += 'a' ; 
        }
        
        a += ('a' + p) ;
        p++ ;
        
    }
    
    reverse(a.begin() , a.end()) ;
    
    cout << a << "\n" ;
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