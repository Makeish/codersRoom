#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string s ; 
    
    cin >> s ; 
    
    int k , x , ans = 0 ; 
    
    cin >> k >> x ; 
    
    map < char , int > mp ; 
    
    for(int i = 0 ; i < s.length() ; ++i) {
        
        if(mp[s[i]] < x) {
            
            ans++ ;
            mp[s[i]]++ ;
            
        }
        else if(mp[s[i]] == x) {
            if(k) {
                k-- ;
            }
            else{
                break ;
            }
        }
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