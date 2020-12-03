#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a , b ; 
    
    cin >> a >> b ; 
    
    map < int , int > mp1 , mp2 ;
    
    for(int i = 0 ; i < a.length() ; ++i) mp1[a[i]]++ ;
    
    for(int i = 0 ; i < b.length() ; ++i) mp2[b[i]]++ ;
    
    int cnt = 0 ;
    
    for(auto x:mp1) {
        if(mp2[x.first] > 0) {
            cnt += min(x.second , mp2[x.first]) ;
        }
    }
    
    cout << cnt << "\n" ; 
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