#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) cin >> a[i] ;
    
    sort(a , a + n) ;
    
    for(int i = 0 ; i < n ; ++i) {
        if(binary_search(a , a + n , i)) {
            cout << i << " " ;
        }
        else {
            cout << "0 " ; 
        }
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