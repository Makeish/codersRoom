#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , cup , q ;
    
    cin >> n >> cup >> q ;
    
    while(q--) {
        
        int a , b ; 
        
        cin >> a >> b ; 
        
        if(cup >= a and cup <= b) {
            cup = b - (cup - a) ; 
        }
    }
    
    cout << cup << "\n" ; 
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