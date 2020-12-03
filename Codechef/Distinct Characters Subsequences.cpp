#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a ; 
    
    cin >> a ; 
    
    unordered_set < char > s ; 
    
    for(int i = 0 ; i < a.length() ; ++i) {
        s.insert(a[i]) ;
    }
    
    cout << (int)s.size() << "\n" ; 
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