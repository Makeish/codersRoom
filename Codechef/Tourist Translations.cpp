#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int n ; 
    
    cin >> n ; 
    
    string a , b ; 
    
    cin >> a ;
    
    map < char , char > mp;
    
    for(int i = 0 ; i < 26 ; ++i) {
        mp['a' + i ] = a[i] ;
    }
    
    // for(auto x:mp) cout << x.first << " " << x.second << "\n" ; 
    
    while(n--) {
        
        cin >> b ;
        
        for(int i = 0 ; i < b.length() ; ++i) {
            if(b[i] == '_') cout << " " ;
            else if(isupper(b[i])) {
                char x = tolower(b[i]) ;
                x = mp[x] ;
                cout << char(x - 32) ;
            }
            else if(islower(b[i])){
                cout << mp[b[i]] ;
            }
            else {
                cout << b[i] ; 
            }
        }
        cout << "\n" ; 
    }
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