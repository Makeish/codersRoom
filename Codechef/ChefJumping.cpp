#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    long long int n ; 
    
    cin >> n ; 
    
    if(n % 6 == 0 or n % 6 == 1 or n % 6 == 3)
        cout << "yes\n" ;
    else
        cout << "no\n" ; 
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