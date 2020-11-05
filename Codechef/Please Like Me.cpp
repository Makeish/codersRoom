#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
#define FastIO ios_base :: sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

using namespace std ;

void solve()
{
    int l , d , s , c ; 
    
    cin >> l >> d >> s >> c ;
    
    long long int f[d + 1] ;
    
    f[1] = s ;
    
    for(int i = 2 ; i <= d ; ++i) {
        f[i] = f[i - 1] + f[i - 1] * c ; 
        
        if(f[i] >= l) {
            cout << "ALIVE AND KICKING\n" ;
            return  ;
        }
    }
    if(f[1] < l)
    cout << "DEAD AND ROTTING\n" ; 
    else
    cout << "ALIVE AND KICKING\n" ;
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