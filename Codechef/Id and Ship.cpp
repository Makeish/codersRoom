#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    char a ; 
    
    cin >> a ;
    
    if(a == 'B' or a == 'b') {
        cout << "BattleShip" << "\n" ;
    }
    else if(a == 'c' or a == 'C') {
        cout << "Cruiser" << "\n" ;
    }
    else if(a == 'd' or a == 'D') {
        cout << "Destroyer" << "\n" ;
    }
    else {
        cout << "Frigate" << "\n" ;
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