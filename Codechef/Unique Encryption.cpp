#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

int cnt[] = {98 , 57 , 31 , 45 , 46 } ;

void solve()
{
    string s ; 
    
    cin >> s ; 
    
    for(int i = 0 ; i < s.length() ; ++i) {
        cout << (char)('A' + ((((s[i] - 'A') + cnt[i])) % 26)) ;
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