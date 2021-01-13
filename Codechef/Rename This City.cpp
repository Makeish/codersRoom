#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , cnt1 = 0 , cnt2 = 0 ; 
    
    cin >> n ; 
    
    int a[n] ;
    
    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a[i] ;
        
        if(a[i] == -1) cnt1++ ;
        else if(a[i] == 1) cnt2++ ;
    }
    
    if(cnt2 >= cnt1) cout << "YES\n" ;
    else cout << "NO\n" ;
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