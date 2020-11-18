#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    string a , b ; 
    
    cin >> a >> b ;
    
    map < char , int > mp,mp1 ;
    
    int maxi = 0 , maxi1 = 0 ;

    for(int i = 0 ; i < a.length() - 1 ; ++i) {
        
        mp[a[i]]++ ; 
        
    }
    
    for(int i = 0 ; i < b.length() - 1 ; ++i) {
        
        mp1[b[i]]++ ; 
        
    }
    
    for(auto x:mp) {
        maxi = max(maxi , x.second) ; 
    }
    
    for(auto x:mp1) {
        maxi1 = max(maxi1 , x.second) ; 
    }
    
    cout << maxi << " " ;
    
    if(a[a.length() - 1] == 'e') {
        cout << "east " ;
    }
    else if(a[a.length() - 1] == 'w') {
        cout << "west " ;
    }
    else if(a[a.length() - 1] == 'n') {
        cout << "north " ;
    }
    else if(a[a.length() - 1] == 's') {
        cout << "south " ;
    }
    
    cout << maxi1 << " " ; 
    
    if(b[b.length() - 1] == 'e') {
        cout << "east\n" ;
    }
    else if(b[b.length() - 1] == 'w') {
        cout << "west\n" ;
    }
    else if(b[b.length() - 1] == 'n') {
        cout << "north\n" ;
    }
    else if(b[b.length() - 1] == 's') {
        cout << "south\n" ;
    }
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