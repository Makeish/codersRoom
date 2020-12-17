#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    while(true) {
        
        int a , b , c ; 
        
        cin >> a >> b >> c ; 
        
        if(a == 0 and b == 0 and c == 0) break ;
        
        if(b - a == c - b) {
            cout << "AP " << c + (c - b) << "\n" ;
        }
        else {
            cout << "GP " << a * pow(c/b , 3) << "\n" ; 
        }
    }
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