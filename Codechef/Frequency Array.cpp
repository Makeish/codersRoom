#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

string solve()
{
    int n ;
    
    cin >> n ; 
    
    int a[n] ;
    
    map < int , int > mp ;
    
    for(int i = 0 ; i < n ; ++i) {
        cin >> a[i] ;
        mp[a[i]]++ ;
    }
    
    for(auto x:mp) if(x.second >= 2) return "ne krasivo\n" ;
    return "prekrasnyy\n" ; 
    
    
}

int main()
{
    FastIO
    
    int testcases = 1;
    
    cin >> testcases ;
    
    while(testcases--) {
        cout << solve() ;
    }
    return 0 ; 
}