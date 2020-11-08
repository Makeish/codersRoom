#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string a ; 
    
    cin >> a ;
    
    map < char , int > mp ;
    
    int cnt = 0 ; 
    
    for(int i = 0 ; i < a.length() ; ++i) {
        mp[a[i]]++ ; 
    }
    
    for(auto x:mp) {
        if(x.second & 1) cnt++ ;
    }
    
    if(cnt > 1) cout << "NO\n" ;
    else cout << "YES\n" ; 
    
    return 0 ; 
    
}