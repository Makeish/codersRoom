#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    
    int n ; 
    
    cin >> n ; 
    
    for(int i = 0 ; i <= n ; ++i) {
        for(int j = 0 ; j <= n ; ++j) {
            if(j >= n - i) {
                cout << j ;
            }
            else {
                cout << " " ;
            }
        }
        
        cout << "\n" ; 
    }
    
    for(int i = 0 ; i < n ; ++i) {
        for(int j = 0 ; j <= n ; ++j) {
            if(j > i) {
                cout << j ;
            }
            else {
                cout << " " ;
            }
        }
        cout << "\n" ; 
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