#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a , b ; 
    
    cin >> a >> b ; 
    
    map < char , int > mp1 , mp2 ;
    
    int ans = 0 ; 
    
    for(int i = 0 ; i < a.length() ; ++i) mp1[a[i]]++ ;
    for(int i = 0 ; i < b.length() ; ++i) mp2[b[i]]++ ;
    
    for(auto x:mp2) {
        if(mp1[x.first])
        ans += x.second ;
    }
    
    cout << ans << "\n" ;
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