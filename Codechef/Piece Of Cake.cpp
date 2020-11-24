#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a ;
    
    cin >> a ;
    
    map < char , int > mp ; 
    
    for(int i = 0 ; i < a.length() ; ++i) {
        mp[a[i]]++ ;
    }
    
    for(auto x:mp){
        if(a.length() %2 == 0 and x.second == a.length()/2) {
            cout << "YES\n" ;
            return ;
        }
    }
    cout << "NO\n" ;
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