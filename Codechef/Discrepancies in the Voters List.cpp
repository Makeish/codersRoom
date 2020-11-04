#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n , m , p , input , cnt = 0 ;
    
    cin >> n >> m >> p ;
    
    map <int , int> mp ;
    
    while(n--) {
        
        cin >> input ;
        mp[input]++ ; 
        
    }
    
    while(m--) {
        
        cin >> input ;
        mp[input]++ ; 
        
    }
    
    while(p--) {
        
        cin >> input ;
        mp[input]++ ; 
        
    }
    
    for(auto x:mp) {
        if(x.second >= 2) cnt++ ;
    }
    
    cout << cnt << "\n" ; 
    
    for(auto x:mp) {
        if(x.second >= 2) cout << x.first << "\n" ;
    }
    
    cout << "\n" ; 
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