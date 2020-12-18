#include <bits/stdc++.h>

using namespace std ;

void solve()
{
    int n , q ; 

    cin >> n ; 

    string a ; 

    map < string , int > mp ;

    for(int i = 0 ; i < n ; ++i) {
        
        cin >> a ;
        mp[a]++ ; 

    }

    cin >> q ; 

    while(q--) {

        cin >> a ;
        cout << mp[a] << "\n" ; 

    }
}

int main()
{
    int testcases = 1 ; 
    
    // cin >> testcases ;
    
    while(testcases--) {
        
        solve() ;
    }
    return 0 ;
}